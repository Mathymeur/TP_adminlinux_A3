#include <assert.h>
#include <math.h>

#include "../area.h"

#define PRECISION 0.00001

void test_area_rectangle() {
    assert(fabs(area_rect(2.0, 8.0) - 16.0) < PRECISION);
}

void test_area_circle() {
    assert(fabs(area_circle(4.0) - 50.26548) < PRECISION);
}

int main() {
    test_area_rectangle();
    test_area_circle();
}
