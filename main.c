#include "common.h"

// ToDo:  move these back to where they were !!!!!!!!!!!!!!!!!!
static void print_page_header(char source_name[], char date[]);

static void print_page_header(char source_name[], char date[]) {
	static int page_number = 0;

	/* Missing Code Here */
}

int main(int argc, const char *argv[]) {

	FILE *source_file;
	char source_name[MAX_FILE_NAME_LENGTH];
	char date[DATE_STRING_LENGTH];

	/* Missing Code Here */

	// check number of command-line arguments
	if (argc != 2) {
		puts("There should be two arguments");
		return 1;
	} // end if

	// get the file pointer
	source_file = init_lister(argv[1], source_name, date);

	// get line by line
	while (get_source_line(source_file, source_name, date)) {

	} // end while

	// fclose closes file
	fclose(source_file);
	//return zero for success
	return 0;
}

FILE *init_lister(const char *name, char source_file_name[], char dte[]) {

	time_t timer;  // get the date
	FILE *file;  // file pointer

	/* Missing Code Here */

	dte = timer;

	size_t i; // counter

	// extract the souce file name
	for (i = 0; i < MAX_FILE_NAME_LENGTH && name[i] != '\0'; ++i) {

		source_file_name[i] = name[i];
	} // end for

	// put null char at the end of the name
	source_file_name[i] = '\0';

	// open the input file.  return null if error
	if ((file = fopen(source_file_name, "r")) == NULL) {
		puts("Error: Could not open file.");

	} // end if

	// return the file pointer
	return file;

}

BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[]) {

	char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
	char source_buffer[MAX_SOURCE_LINE_LENGTH];
	static int line_number = 0;
	// do as long as not end of file
	if (!feof(src_file)) //This is missing a condition
			{
		/*  Missing Code Here */

		// use fgets to read line of text
		fgets(source_buffer, MAX_SOURCE_LINE_LENGTH, src_file);

		line_number++;  //inc line number by 1
		// print source buffer into print buffer with line number
		sprintf(print_buffer, "%d%s%s", line_number, "  ", source_buffer);
		// call the method to print a line
		print_line(print_buffer, print_buffer, todays_date);
		// return true to indicate success
		return (TRUE);
	} else {
		// return false if end of file
		return (FALSE);
	}

}

