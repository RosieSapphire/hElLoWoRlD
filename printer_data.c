#include "printer_data.h"

void printer_data_set_string_to_print(printer_data_t *printer_data, const char *string_to_print) {
	printer_data->string_to_print = string_to_print;
}

void printer_data_set_has_newline(printer_data_t *printer_data, boolean_t has_newline) {
	printer_data->has_newline = has_newline;
}
