#include "area.h"
#include <math.h>

float area_rect(float height, float width) {
    return height * width;
}

float area_circle(float radius) {
    return M_PI * radius * radius;
}
