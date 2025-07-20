#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    fprintf(file,"Hello World");
    fclose(file);
    printf("I add some text");
    return 0;
}