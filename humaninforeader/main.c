
#include <stdio.h>
#include <stdlib.h>
#include "personReader.h"

int main(int argc, char *argv[])
{
	FILE* infile;

	if (argc < 2) {
        printf("\nFatal error: incorrect amount of arguments\n");
        exit(2);
    }

	// Open person.dat for reading
	infile = fopen(argv[1], "rb");
	if (infile == NULL) {
		fprintf(stderr, "\nFatal error: file access error\n");
		exit(1);
	}

	Person read_struct = get_person(infile);

	printf("Name: %s %s \nLocation: %s", read_struct.fname,
		read_struct.lname, read_struct.location /*, (int)read_struct.age*/);

	// close file
	fclose(infile);

	return 0;
}
