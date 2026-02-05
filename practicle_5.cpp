// AIM: Write a program to rotate a rectangle about its midpoint

#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Original rectangle coordinates
    int x1 = 100, y1 = 100;
    int x2 = 400, y2 = 300;

    // Draw original rectangle
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);

    // Calculate midpoint of rectangle
    float mx = (x1 + x2) / 2.0;
    float my = (y1 + y2) / 2.0;
	circle(mx, my, 3);
	
    // Rotation angle (in degrees)
    float angle = 45;
    float rad = angle * 3.14159 / 180;

    // Rectangle vertices
    float x[4] = {x1, x2, x2, x1};
    float y[4] = {y1, y1, y2, y2};

    float xr[4], yr[4];

    // Rotate each vertex about midpoint
    for (int i = 0; i < 4; i++)
    {
        xr[i] = mx + (x[i] - mx) * cos(rad) - (y[i] - my) * sin(rad);
        yr[i] = my + (x[i] - mx) * sin(rad) + (y[i] - my) * cos(rad);
    }

    // Draw rotated rectangle
    setcolor(YELLOW);
    for (int i = 0; i < 4; i++)
    {
        line(xr[i], yr[i], xr[(i + 1) % 4], yr[(i + 1) % 4]);
    }

    getch();
    closegraph();
    return 0;
}

