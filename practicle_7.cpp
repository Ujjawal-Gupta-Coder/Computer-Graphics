// AIM: Program to implement standard perspective projection in 3-Dimensions

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // 3D point coordinates
    float x = 100, y = 100, z = 50;

    // Distance of projection plane from viewer
    float d = 200;

    // Perspective projection formulas
    float xp = (x * d) / (z + d);
    float yp = (y * d) / (z + d);

    // Shift origin to center of screen
    int xc = getmaxx() / 2;
    int yc = getmaxy() / 2;

    // Draw original 3D point (reference)
    setcolor(WHITE);
    outtextxy(10, 10, (char*)"Standard Perspective Projection");
    circle(xc + x, yc - y, 3);
    outtextxy(xc + x + 5, yc - y, (char*)"3D Point");

    // Draw projected 2D point
    setcolor(RED);
    circle(xc + xp, yc - yp, 4);
    outtextxy(xc + xp + 5, yc - yp, (char*)"Projected Point");

    // Draw line from viewer to projected point (visual aid)
    setcolor(GREEN);
    line(xc, yc, xc + xp, yc - yp);

    getch();
    closegraph();
    return 0;
}

