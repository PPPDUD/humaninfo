typedef struct person Person;
// struct person with 3 fields
struct person {
	char location[2000];
	char fname[20];
	char lname[20];
	//unsigned char age;
};

Person get_person(FILE* infile) {
    Person read_struct;

	// setting pointer to start of the file
	rewind(infile);

	// reading to read_struct
	fread(&read_struct, sizeof(read_struct), 1, infile);

    return read_struct;
}
