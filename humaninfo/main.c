// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// a struct to be read and written

struct person {
	char location[2000];
	char fname[20];
	char lname[20];
	//unsigned char age;
};

struct person input1;


int main(int argc, char *argv[])
{
	FILE* outfile;
	char buf_orp[2500];

    if (argc < 2) {
        printf("\nFatal error: incorrect amount of arguments\n");
        exit(2);
    }

	// open file for writing
	outfile = fopen(argv[1], "wb");
	if (outfile == NULL) {
		fprintf(stderr, "\nFatal error: file access error\n");
		exit(1);
	}

	printf("Location: ");
	fgets(buf_orp, 2000, stdin);
	buf_orp[strcspn(buf_orp, "\n")] = 0;
    strcpy(input1.location, buf_orp);

    printf("First name: ");
	fgets(buf_orp, 20, stdin);
	buf_orp[strcspn(buf_orp, "\n")] = 0;
    strcpy(input1.fname, buf_orp);

    printf("Last name (and middle name, if applicable): ");
	fgets(buf_orp, 20, stdin);
	buf_orp[strcspn(buf_orp, "\n")] = 0;
    strcpy(input1.lname, buf_orp);

    /*print("Age in years: ");
    int age;
    scanf("%d", &age);

    if (age > 255 || age < 0) {
        printf("Error: Invalid age. Setting age to 255.");
        age = 255;
    }

    input1.age = age;

    printf("\n");

    */


	// write struct to file
	int flag = 0;
	flag = fwrite(&input1, sizeof(struct person), 1,
				outfile);

    printf("\n\n");
	if (flag) {
		printf("[DEBUG] Successfully wrote data to file\n");
	}
	else
		printf("Fatal error: file unwritable\n");

	// close file
	printf("[DEBUG] Flushing data..\n");
	fclose(outfile);
    printf("[DEBUG] Data flushed. It is now safe to close this program.");
	return 0;
}
