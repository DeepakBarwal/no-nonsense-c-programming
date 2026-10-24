#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define START_BYTES 3

// Reads a full sentence from user input (stdin) and outputs that sentence again
int main()
{
    unsigned int memory_size = START_BYTES;
    char *text = calloc(memory_size, 1);
    memset(text, 0, memory_size);

    char *corruption_string = malloc(500);

    int c;
    int i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            text[i] = '\0';
            break;
        }
        
        if (i >= memory_size)
        {
            // Increase (reallocate) the reserved memory
            memory_size *= 2;
            text = realloc(text, memory_size);
            printf("Resized memory to size: %u byte.\n", memory_size);
        }
        text[i] = c;
        i++;
    }
    strcpy(corruption_string, "IF YOU SEE THIS STRING IS PRINTED, MEMORY IS CORRUPTED!");
    printf("You typed %s\n", text);

    return 0;
}