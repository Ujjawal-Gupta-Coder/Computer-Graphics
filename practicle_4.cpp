// AIM: Write a program to draw bezier curve.

#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Control points
    int x0 = 100, y0 = 300;
    int x1 = 200, y1 = 100;
    int x2 = 400, y2 = 100;
    int x3 = 500, y3 = 300;

    // Draw control points
    circle(x0, y0, 3);
    circle(x1, y1, 3);
    circle(x2, y2, 3);
    circle(x3, y3, 3);
	
    // Draw Bezier curve
    for (float t = 0.0; t <= 1.0; t += 0.001)
    {
        float xt = pow(1 - t, 3) * x0 +
                   3 * t * pow(1 - t, 2) * x1 +
                   3 * pow(t, 2) * (1 - t) * x2 +
                   pow(t, 3) * x3;

        float yt = pow(1 - t, 3) * y0 +
                   3 * t * pow(1 - t, 2) * y1 +
                   3 * pow(t, 2) * (1 - t) * y2 +
                   pow(t, 3) * y3;

        putpixel((int)xt, (int)yt, YELLOW);
    }

    getch();
    closegraph();
    return 0;
}
