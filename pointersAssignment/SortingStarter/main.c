#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
#include <string.h>
	
/*
 * Read the file from the command-line.
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 *
 */

int main(int argc, char** argv){
	// Read the original file.
	char* Contents;
	size_t size = load_file(argv[1] , &Contents);
	
	char Words[200000][100];//overkill
	char* token;
	int wordcount = 0;
	token = strtok(Contents,"\n");
	for (int i = 0; token != NULL; i++){
		++wordcount;
		strcpy(token, Words[i]);
		token = strtok(NULL, "\n");
	}	
	printf("%d", wordcount);
	for (int i = 0; i< wordcount; ++i){
		printf("%s", Words[i]);
	}

	// Sort the file with the function you wrote.
	// parse into strings
	

	// Write out the new file.
	

}

// You can see if your file worked correctly by using the
// command:
//
// diff ORIGINAL_FILE NEW_FILE
//
// If the command returns ANYTHING the files are different.
