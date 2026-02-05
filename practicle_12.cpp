// AIM: Write a program to implement bouncing ball in vertical direction

#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x = getmaxx() / 2;
    int y = 50;
    int r = 20;
    int speed = 5;

    int top = r;
    int bottom = getmaxy() - r;

    while (!kbhit())
    {
        cleardevice();

        setcolor(WHITE);
        setfillstyle(SOLID_FILL, RED);
        circle(x, y, r);
        floodfill(x, y, WHITE);

        y += speed;

        // Change direction at top or bottom
        if (y >= bottom || y <= top)
            speed = -speed;

        delay(50);
    }

    getch();
    closegraph();
    return 0;
}

