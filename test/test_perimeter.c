// test/test_perimeter.c
#include <assert.h>
#include <math.h>

#include "../perimeter.h"
#include "../perimeter.c"
#define PRECISION 0.00001

void test_perimeter_rectangle() {
    assert(fabs(perimeter_rect(2.0, 8.0) -20.0) < PRECISION);

}

void test_perimeter_circle() {
    assert(fabs(perimeter_circle(4.0) - 25.13274) < PRECISION);
}

int main() {
    test_perimeter_rectangle();
    test_perimeter_circle();
}

