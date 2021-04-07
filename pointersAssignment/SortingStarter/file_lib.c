#include "file_lib.h"
#include <stdio.h>
#include <sys/stat.h>

size_t load_file(char* path, char** contents){
	struct stat st;
	stat(path, &st);
	size_t size = st.st_size;

	FILE* fp = fopen(path, "r");
	if (fp == NULL){
		return 0;
	}

	*contents = malloc (sizeof(char) * size);
	size_t read_num_bytes = fread(*contents, 1, size, fp);

	fclose(fp);

	return read_num_bytes;
}
size_t save_file(char* path, char* contents, size_t size){
	
}

