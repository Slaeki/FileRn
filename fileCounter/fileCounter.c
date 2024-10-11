#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

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
  closedir(dir);
  return fileCount;
}