#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
	
/*
 * Read the file from the command-line.
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 *
 */

int main(int argc, char** argv){
	// Read the original file.
	char* Contents;
	size_t size = load_file( argv[1] , &Contents);
	
	char** Words;
	char* token;
	int wordcount = 0;
	int lettercount = 0;
	token = strtok(Contents,"\n");
	for (int i = 0; token != NULL; i++){
		++wordcount;
		token = strtok(NULL, "\n");
	}

	Words = malloc(sizeof(char*) * wordcount);
	
	load_file(argv[1], &Contents);
	token = strtok(Contents, "\n");
	for (int i = 0; token != NULL; i++){
		lettercount = 0;
		for(int j = 0; token[j] != '\0'; j++){
			lettercount++;
		}
		Words[i]=malloc(sizeof(char) * (lettercount + 1));//include null char
		strcpy(Words[i], token);
		token = strtok(NULL, "\n");
	}
	printf("%d", wordcount);
	for (int i = 0; i< wordcount; ++i){
	//	printf("%s\n", Words[i]);
	}
	
	char*** WordsPtr = &Words;
	igiveup(*WordsPtr, wordcount);
	//strcpy(Contents, "\0");//clear contents
	char* temp;
	for (int i = 0; i< wordcount; ++i){
		strcat(Words[i],"\n");//add newline
		strcat(temp, Words[i]);//append all words onto contents
	}

	save_file(argv[2], temp, size);

	//free mem
	

	for (int i = 0; i < wordcount; i++){
		free(Words[i]);
	}
	free(Words);

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
