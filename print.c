#include "common.h"

void print_line(char line[], char source_name_to_print[], char date_to_print[]) {
	char save_ch;
	char *save_chp = NULL;
	static int line_count = MAX_LINES_PER_PAGE;

	// This line is for testing only !!!!!!!!!!!!!!!
	printf(source_name_to_print);

	if (++line_count > MAX_LINES_PER_PAGE) {
		/* Missing Code Here */
	}
	if (strlen(line) > MAX_PRINT_LINE_LENGTH) {
		/* Missing Code Here */
	}
	if (save_chp) {
		/* Missing Code Here */
	}
	/* Missing Code Here */
	if (save_chp) {
		/* Missing Code Here */
	}
}

