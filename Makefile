perimeter.o: perimeter.c perimeter.h
	gcc -c perimeter.c

test_perimeter.o: tests/test_perimeter.c perimeter.h
	gcc -c test/test_perimeter.c

test_perimeter: test_perimeter.o perimeter.o
	gcc -lm -o test_perimeter test_perimeter.o perimeter.o

area.o: area.c area.h
	gcc -c area.c

test_area.o: tests/test_area.c area.h
	gcc -c tests/test_area.c

test_area: test_area.o area.o
	gcc -lm -o test_area test_area.o area.o
