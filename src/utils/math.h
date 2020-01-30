/*
Math utility file
*/

#include <math.h>

int euclidean_distance(int x1, int y1, int x2, int y2) {
    int sq_xy, result;

    sq_xy = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    result = sqrt(sq_xy);

    return result;
}