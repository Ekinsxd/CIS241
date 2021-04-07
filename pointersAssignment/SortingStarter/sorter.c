#include "sorter.h"
#include <string.h>

void merger(char** arr, int l, int m, int r){
	int i, j, k;
	int len1 = m;
	int len2 = r - m;

	char* L[len1], R[len2];
	
	//temp
	for (i = 0; i< len1; ++i){
		L[i] = arr[l + i];
	}
	for (j = 0; j< len2; ++i){
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = 0;

	while (i < len1 && j < len2){
		if (strcmp(L[i], R[j]) > 0){
			arr[k] = L[i];
			++i;
		}
		else {
			arr[k] = R[j];
			++j;
		}
		++k;
	}
	//if elements still remain copy over
	while (i < len1){
		arr[k] = L[i];
		++k;
		++i;
	}

	while (j < len2){
		arr[k] = R[j];
		++j;
		++k;
	}

}

void mergeSort(int* arr, int l, int r){
	if ((l+r)/2 > 0){
		int m = 1 + (r-1) / 2;

		mergeSort(arr, 1, m);
		mergeSort(arr, m + 1, r);
		//set all merge pointers then merge
		merge(arr, 1, m, r);
	}
}

