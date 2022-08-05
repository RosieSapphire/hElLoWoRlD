#ifndef PRINTER_H
#define PRINTER_H

#include "printer_data.h"

typedef struct {
	printer_data_t printer_data;
} printer_t;

void printer_set_string_to_print(printer_t *printer, const char *string_to_print);
void printer_set_has_newline(printer_t *printer, boolean_t has_newline);
void printer_print_string_to_print(printer_t *printer);

#endif
