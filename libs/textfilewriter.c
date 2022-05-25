#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"
#include "textfilewriter.h"

#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream){
	Node* playlist = NULL;

	int num = 0;
	int i = 0;
	
	fscanf(fp,"%d", &num);

	for (i; i < num; i++) {

		char title[MAX_TITLE_SIZE];

		while (fgets(title, sizeof(title), fp) != NULL) {

			append(sizeof(title),title);

		}
	}
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
	FILE* fp = fopen(file_name,"w");

	if (fp == NULL) {
		printf("FILE ERROR!\n");
	}

	else {

		Node* p = _tail;
		while (p->prev != _head) {
			fprintf(fp, "%s\n", p->data);
			p = p->prev;
		}
		fprintf(fp,"%s\n", p->data);
	}

	fclose(fp);
}
