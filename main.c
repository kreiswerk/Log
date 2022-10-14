#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define MAXCHARS 10000

int main(int argc, char **argv)
{
    //Get current Time
    time_t t;
    time(&t);


    // Opening File WORKS//
    FILE *filePointer;
    filePointer = fopen("/Users/m3226/Documents/feels/logs.txt", "a");
    if (filePointer == NULL)
        printf("Error opening File\n");

    //Reading input && copying to file Also works, implement error handling for scanf and writing to file
    char *txt = malloc(MAXCHARS * sizeof(char));
    scanf("%9999c", txt);
    printf("\n%s", txt);
    fprintf(filePointer, "///////KRL, %s%s\n\n", ctime(&t), txt);

    fclose(filePointer);
}