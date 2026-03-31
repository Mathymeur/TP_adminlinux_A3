perimeter.o: perimeter.c perimeter.h
	gcc -c perimeter.c

test_perimeter.o: tests/test_perimeter.c perimeter.h
	gcc -c test/test_perimeter.c

test_perimeter: test_perimeter.o perimeter.o
	gcc -lm -o test_perimeter test_perimeter.o perimeter.o

