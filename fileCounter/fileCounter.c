#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int fileCounter(char *DIRECTORY){
    //Defining function variables
    DIR *dir; // DIR object to hold the directory within the function
    struct dirent *dp; // * i do not really know much about this if someone could explain to me it'dbe much appreciated
    int fileCount = 0; // int for storing the count of the files

    // if no directory was provided an error will be provided
    if ((dir = opendir(DIRECTORY)) == NULL){
        fprintf(stderr, "Couldn't open Directory: %s\n", DIRECTORY);
    }    

    // loop to go through each file in the directory
    while ((dp = readdir(dir)) != NULL) {
        if (!strcmp(dp->d_name, ".") || !strcmp(dp->d_name, ".."))
            continue;
            fileCount++;
    }

    // if no files were found this will handle the error and close the directory
    if (fileCount == 0){
        printf("Directory is Empty \n");
        closedir(dir);
        return -1;
    } else { // else it will return the count
        closedir(dir);
        return fileCount;
    }
    //i added this to 
    return 0;
}