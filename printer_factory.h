#ifndef PRINTER_FACTORY_H
#define PRINTER_FACTORY_H

#include "printer.h"

typedef struct {
	printer_t *printers;
	unsigned int printer_count;
} printer_factory_t;

void printer_factory_create_printers(printer_factory_t *printer_factory, unsigned int printer_count);
void printer_factory_destroy_printers(printer_factory_t *printer_factory);
printer_t *printer_factory_get_printer_by_index(printer_factory_t *printer_factory, unsigned int index);

#endif
