#include "printer_factory.h"

#include <stdlib.h>

void printer_factory_create_printers(printer_factory_t *printer_factory, unsigned int printer_count) {
	printer_factory->printer_count = printer_count;
	printer_factory->printers = malloc(printer_factory->printer_count * sizeof(printer_t));
}

void printer_factory_destroy_printers(printer_factory_t *printer_factory) {
	free(printer_factory->printers);
}

printer_t *printer_factory_get_printer_by_index(printer_factory_t *printer_factory, unsigned int index) {
	return &printer_factory->printers[index];
}
