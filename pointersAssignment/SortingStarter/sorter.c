#include "sorter.h"
#include <string.h>

void merge(char** arr, int l, int m, int r){
	int i, j, k;
	int len1 = m - l -1;
	int len2 = r - m;

	char L[len1][50];
	char R[len2][50];
	
	//temp
	for (i = 0; i< len1; ++i){
		strcpy(L[i], arr[l + i]);
	}
	for (j = 0; j< len2; ++j){
		strcpy(R[j], arr[m + j + 1]);
		//R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;

	while (i < len1 && j < len2){
		if (strcmp(L[i], R[j]) > 0){
			strcpy(arr[k],L[i]);
			//arr[k] = L[i];
			++i;
		}
		else {
			strcpy(arr[k],R[j]);
			//arr[k] = R[j];
			++j;
		}
		++k;
	}
	//if elements still remain copy over
	while (i < len1){
		//arr[k] = L[i];
		strcpy(arr[k],L[i]);
		++k;
		++i;
	}

	while (j < len2){
		//arr[k] = R[j];
		strcpy(arr[k],R[j]);
		++j;
		++k;
	}

}

void mergeSort(char** arr, int l, int r){
	if (l>=r){
		return;
	}
	int m = l + (r-l) / 2;
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	//set all merge pointers then merge
	merge(arr, l, m, r);

}

void igiveup(char** arr, int len){
	char temp[50];
	for (int i = 0; i< len; ++i){
		for (int j = i; j< len; ++j){
			if (strcasecmp(arr[j],arr[i]) < 1){
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}	
		}	
	}
}


