#include <stdio.h>
#include <string.h>

#define COUNT 256

void printAllCharacterCounts(int *character_counts)
{
    int frequency;
    for (int i = 32; i < 126; i++) // filter out ASCII characters
    {
        frequency = character_counts[i];
        if (frequency != 0)
            printf("%c -> %d\n", i, frequency);
    }
}

// A simple character frequency analyzer
int main()
{
    int character_counts[COUNT];
    // for (int i = 0; i < COUNT; i++)
    //     character_counts[i] = 0;
    memset(character_counts, 0, COUNT * sizeof(character_counts[0]));

    int c;
    while ((c = getc(stdin)) != EOF)
    {
        character_counts[c] += 1;
    }

    printAllCharacterCounts(character_counts);

    return 0;
}