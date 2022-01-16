#include <stdio.h>

int main(void)
{
    FILE *file_pointer;     // FILE is a typedef structure, containing info about file open
    file_pointer = fopen("myFile.txt", "a");

    int c;
    while ((c = getchar())!= EOF)
        putc(c, file_pointer);

    fclose(file_pointer);   //fclose automatically when program terminates normally 
    exit(0);    // equivalent to return 0;
}