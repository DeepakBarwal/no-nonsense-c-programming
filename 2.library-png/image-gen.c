#include <stdio.h> // inside /usr/include or /usr/local/include
#include "TinyPngOut.h"
#include <stdbool.h>

#define WIDTH 400
#define HEIGHT 400

int main()
{
    printf("Generating image ...\n");
    FILE *outfile = fopen("out.png", "w");
    
    struct TinyPngOut pngWriter;
    TinyPngOut_init(&pngWriter, WIDTH, HEIGHT, outfile);

    uint8_t mint_pixel[] = {48,176,120};
    uint8_t red_pixel[] = {255,0,0};
    bool in = false;
    for (int y = 0; y < HEIGHT; y++)
    {
        if (y % 10 == 0)
        {
            in = !in;
        }
        for (int x = 0; x < WIDTH; x++)
        {
            if (in)
                TinyPngOut_write(&pngWriter, mint_pixel, 1);
            else
                TinyPngOut_write(&pngWriter, red_pixel, 1);
        }
    }

    printf("Done\n");
}
