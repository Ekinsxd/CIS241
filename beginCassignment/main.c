#include "circleLib.h"
#include "newLib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int radius = 2;

	printf("%g\n", calcPerim(radius));
	printf("%g\n", calcArea(radius));

	int Wid = 5;
	int Len = 2;

	printf("%g\n", calcPerimR(Wid, Len));
	printf("%g\n", calcAreaR(Wid, Len));

	return 0;
}
