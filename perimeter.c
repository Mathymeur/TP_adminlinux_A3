// perimeter.c
#include "perimeter.h"

float perimeter_rect(float height, float width) {
    return 2 * (height + width);
}
// perimeter.c
// ...
#include <math.h>

float perimeter_circle(float radius) {
    return 4 * M_PI * radius;
}

