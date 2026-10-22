#include <stdio.h>

int main()
{
    FILE *file = fopen("../readme.md", "r");
    int c;
    while ((c = getc(file)) != EOF)
    {
        putc(c, stdout);
    }
    fclose(file);

    return 0;
}