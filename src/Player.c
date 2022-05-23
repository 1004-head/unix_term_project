
#include <stdio.h>
#include <string.h>

enum Command{
    add,
    del,
    list,
    next,
    prev,
    move,
    play,
    clear,
    quit,
    load,
    save
};

void checkCommand(char* command){
    switch (command) {
        case add:
            break;
        case del:
            break;
        case list:
            break;
        case next:
            break;
        case prev:
            break;
        case move:
            break;
        case play:
            break;
        case clear:
            break;
        case quit:
            break;
        case load:
            break;
        case save:
            break;
        default:
            printf("Invalid Command\n");
            break;
    }
}

int main(){
    int musicNum = 0;
    scanf("%d", &musicNum);

    for(int i=0; i<musicNum; i++){
        char *title;
        fgets(title, MAX_TITLE_SIZE);

    }

    int commandNum = 0;
    scanf("%d", &commandNum);

    for(int i = 0; i < commandNum; i++){
        char *command;
        scanf("%s", command);

        char *ptr = strtok(command, " ");

        while (ptr != NULL)
        {
            checkCommand(ptr);
            ptr = strtok(NULL, " ");
        }
    }
}
