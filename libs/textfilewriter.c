#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"
#include "textfilewriter.h"

#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream){
	
}

void read_file(char* file_name){

	FILE* fp = fopen(file_name, "r");

	if (fp == NULL) {
		printf("ERROR!\n");
	}

	else {
		create_music_titles(fp);
	}

	fclose(fp);

}

void write_file(char* file_name){

}
