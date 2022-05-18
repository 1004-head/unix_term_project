
#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream){
	
}

void read_file(char* file_name){

	char title[MAX_TITLE_SIZE];

	FILE* fp = fopen(file_name, "r");

	if (fp == NULL) {
		printf("ERROR!\n");
	}

	else {

		while (fgets(title, sizeof(title), fp) != NULL ){
			printf("%s", title);
		}
	}

	fclose(fp);

}

void write_file(char* file_name){

}
