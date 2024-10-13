#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int fileCounter(char *DIRECTORY){
    DIR *dir;
    struct dirent *dp;
    int fileCount = 0;
    if ((dir = opendir(DIRECTORY)) == NULL){
        fprintf(stderr, "Couldn't open Directory: %s\n", DIRECTORY);
    }    
    while ((dp = readdir(dir)) != NULL) {
        if (!strcmp(dp->d_name, ".") || !strcmp(dp->d_name, ".."))
            continue;
            fileCount++;
    }
    if (fileCount == 0){
        printf("Directory is Empty ");
        closedir(dir);
    } else {
        closedir(dir);
        return fileCount;
    }
    return -1;
}