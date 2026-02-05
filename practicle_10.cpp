// AIM: Write a program to draw animation using increasing circles filled with different colors and patterns

#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;

    int colors[] = {RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA, WHITE};
    int patterns[] = {SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL,
                      BKSLASH_FILL, HATCH_FILL, XHATCH_FILL};

    int colorCount = 7;

    for (int r = 10; r <= 200; r += 10)
    {
        setcolor(colors[r / 10 % colorCount]);
        setfillstyle(patterns[r / 10 % colorCount],
                     colors[r / 10 % colorCount]);

        circle(x, y, r);
        floodfill(x, y, colors[r / 10 % colorCount]);

        delay(300);
    }

    getch();
    closegraph();
    return 0;
}

