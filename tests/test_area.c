#include <assert.h>
#include <math.h>

#include "../area.h"

#define PRECISION 0.00001

void test_area_rectangle() {
    assert(fabs(area_rect(2.0, 8.0) - 16.0) < PRECISION);
}

int main() {
    test_area_rectangle();
}
