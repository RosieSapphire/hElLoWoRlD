#ifndef PRINTER_DATA_H
#define PRINTER_DATA_H

#include "boolean_type.h"

typedef struct {
	const char *string_to_print;
	boolean_t has_newline;
} printer_data_t;

void printer_data_set_string_to_print(printer_data_t *printer_data, const char *string_to_print);
void printer_data_set_has_newline(printer_data_t *printer_data, boolean_t has_newline);

#endif
