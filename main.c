/* This program is free and opensource
   It will be managed by me @Slaeki on github
   any help from colaborators is appreciated
*/

// standard libraries for C
#include <stdio.h>
#include <stdlib.h>
#include "fileCounter/fileCounter.h"

int fileCount;

// filern is a program designed to remove annoying prefixes, suffixes or tags when downloading multiple files
char *DIRECTORY = "C:\\Users\\Angel\\Desktop\\TESTER";

// main function
int main() {
    fileCount = fileCounter(DIRECTORY);
    printf("%d", fileCount);
    
    return 0;
}