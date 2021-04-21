#include "sorter.h"
#include <string.h>

/***********************************************************************
 *
 * Sort the given String Array Using A very wasteful insertion Sort :)
 *
 * Arr: String Array to be sorted
 *
 * len: Lengths of String Array
 *
 * Return: N/A
 *
 *---------------------------------------------------------------------*/

void igiveup(char** arr, int len){
	char temp[100];
	int pos = 0;
	for (int i = 0; i< len; ++i){
		for (int j = i; j< len; ++j){
			if (strcasecmp(arr[j],arr[i]) < 0){
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}	
		}	
	}
}


