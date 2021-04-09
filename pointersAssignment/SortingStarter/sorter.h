#ifndef __SORTER_LIB__
#define __SORTER_LIB__
#include <stdlib.h>
#include <stdio.h>

void merge(char** arr, int l, int m, int r);
//helper function
void mergeSort(char** arr, int l, int r);
//called by main
void igiveup(char** arr, int len);
#endif
