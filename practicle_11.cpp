// AIM: Write a program to control a ball using arrow keys

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int r = 20;
    char ch;

    while (1)
    {
        cleardevice();

        setcolor(WHITE);
        setfillstyle(SOLID_FILL, BLUE);
        circle(x, y, r);
        floodfill(x, y, WHITE);

        ch = getch();

        // Arrow keys generate two characters
        if (ch == 0 || ch == -32)
        {
            ch = getch();
            switch (ch)
			{
            case 72: // Up arrow
                y -= 10;
                break;
            case 80: // Down arrow
                y += 10;
                break;
            case 75: // Left arrow
                x -= 10;
                break;
            case 77: // Right arrow
                x += 10;
                break;
            }
        }
        else if (ch == 27) // ESC key to exit
        {
            break;
        }
    }

    closegraph();
    return 0;
}
