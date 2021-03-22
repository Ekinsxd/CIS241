#include "circleLib.h"
#include <math.h>

const double PI = M_PI;

double calcPerim(double radius){
	return 2 * M_PI * radius;
}

double calcArea(double radius){
	return M_PI * radius * radius;
}
