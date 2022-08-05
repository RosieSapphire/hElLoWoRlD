#include "printer.h"

#include <stdio.h>

void printer_set_string_to_print(printer_t *printer, const char *string_to_print) {
	printer_data_set_string_to_print(&printer->printer_data, string_to_print);
}

void printer_set_has_newline(printer_t *printer, boolean_t has_newline) {
	if(has_newline == TRUE)
		printer_data_set_has_newline(&printer->printer_data, TRUE);
	else if(has_newline == FALSE)
		printer_data_set_has_newline(&printer->printer_data, FALSE);
}

void printer_print_string_to_print(printer_t *printer) {
	if(printer->printer_data.has_newline == TRUE)
		printf("%s\n", printer->printer_data.string_to_print);
	else if(printer->printer_data.has_newline == FALSE)
		printf("%s", printer->printer_data.string_to_print);
}
