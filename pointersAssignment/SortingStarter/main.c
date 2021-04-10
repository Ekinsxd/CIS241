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
	for (int i = 0; Contents[i] != '\0'; i++){
		if (Contents[i] == '\n')
			++wordcount;
		//token = strtok(NULL, "\n");
	}

	Words = malloc(sizeof(char*) * (wordcount));
	
	token = strtok(Contents, "\n");
	for (int i = 0; token != NULL; i++){
		lettercount = 1;
		for(int j = 0; token[j] != '\0'; j++){
			lettercount++;
		}
		Words[i]=malloc(sizeof(char) * (lettercount + 10));//include buffer
		strcpy(Words[i], token);
		token = strtok(NULL, "\n");
	}

	char*** WordsPtr = &Words;
	igiveup(*WordsPtr, wordcount);
	strcpy(Contents, "");//clear contents
	
	for (int i = 0; i< wordcount; ++i){
		strcat(Words[i],"\n");//add newline
		strcat(Contents, Words[i]);//append all words onto contents
	}

	save_file(argv[2], Contents, size);

	//free mem

	printf("%d", wordcount);
	for (int i = 0; i < wordcount; i++){
		free(Words[i]);
	}
	free(Words);
	//
	//
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
