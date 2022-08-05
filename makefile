all:
	gcc -o hello_world.out -ansi -pedantic main.c printer.c printer_data.c printer_factory.c -Wall -O2

debug:
	gcc -o hello_world.out -ansi -pedantic main.c printer.c printer_data.c printer_factory.c -Wall -Werror -g3 -Og

clean:
	rm -f hello_world.out
