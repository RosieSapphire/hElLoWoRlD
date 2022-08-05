#include "printer_factory.h"

#define NULL ((void *)0)

int main() {
	printer_factory_t printer_factory;
	printer_factory_create_printers(&printer_factory, 1);
	printer_set_string_to_print(printer_factory_get_printer_by_index(&printer_factory, 0), "Hello World.");
	printer_set_has_newline(printer_factory_get_printer_by_index(&printer_factory, 0), 1);
	printer_print_string_to_print(printer_factory_get_printer_by_index(&printer_factory, 0));
	printer_factory_destroy_printers(&printer_factory);
	return 0;
}
