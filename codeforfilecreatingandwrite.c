#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    fprintf(file,"Hello World");
    fclose(file);
    printf("I add some text");
    printf("Some text added by Abid Khan");
    return 0;
}
