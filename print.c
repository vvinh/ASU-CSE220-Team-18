/********************************************
*
* CSE220 LS 12166 Lab2 Team18
* Nicholas Murray
* Vivian Vinh
* Timothy Zamora
*
**********************************************/

#include "common.h"
//2014.02.21.19
static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;

	
	if (++line_count > MAX_LINES_PER_PAGE) {
		
		print_page_header(line, date_to_print);
		line_count = 1;
	}
	// If the length of the string is larger than the maximum allowed length
	if (strlen(source_name_to_print) > MAX_PRINT_LINE_LENGTH) {
		save_ch = source_name_to_print[MAX_PRINT_LINE_LENGTH];
		// Save the character at the maximum allowed value.
		save_chp = source_name_to_print + MAX_PRINT_LINE_LENGTH;
		source_name_to_print[MAX_PRINT_LINE_LENGTH] = '\0';
		// Replace the character at the end with a null value.
		
	}

	printf("%s", source_name_to_print);

	
	if (save_chp)// Restore line to previous state before truncation
	{
		
		*save_chp = save_ch;
	}
}
static void print_page_header(char source_name[], char date[])
{
	static int page_number = 0;// Page number starts at page 0
	
	page_number++;
	printf("Page\t%d\t%s\t%s\n", page_number, source_name, date);// Prints the header message. Page number, name of the file, and the date is was created

}
