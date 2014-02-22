#include "common.h"

static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;

	// This line is for testing only !!!!!!!!!!!!!!!
	//printf("TEST%s", source_name_to_print);
	
	if (++line_count > MAX_LINES_PER_PAGE) {
		/* Missing Code Here */
		print_page_header(source_name_to_print, date_to_print);
		line_count = 1;
	}
	if (strlen(line) > MAX_PRINT_LINE_LENGTH) {
		save_ch = line[MAX_PRINT_LINE_LENGTH];
		save_chp = line + MAX_PRINT_LINE_LENGTH;
		line[MAX_PRINT_LINE_LENGTH] = '\0';		
		/* Missing Code Here */
	}
	printf("%d%s%s", line_count, ": ", line);
	//printf("MINE%s", source_name_to_print);
	/*Missing Code Here*/
	if (save_chp) {
		/* Missing Code Here */
		*save_chp = save_ch;
	}
}
static void print_page_header(char source_name[], char date[])
{
	static int page_number = 0;
	//Missing code here
	page_number++;
	printf("Page\t%d\t%s\t%s\n", page_number, source_name, date);
}
