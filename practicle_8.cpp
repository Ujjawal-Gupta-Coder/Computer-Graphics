// AIM: Program to implement parallel projection in 3-Dimentions

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // 3D point coordinates
    float x = 120, y = 100, z = 80;

    // Parallel projection (Orthographic)
    // xp = x, yp = y
    float xp = x;
    float yp = y;

    // Screen center
    int xc = getmaxx() / 2;
    int yc = getmaxy() / 2;

    // Title
    setcolor(WHITE);
    outtextxy(10, 10, (char*)"Parallel Projection (Orthographic)");

    // Draw original 3D point (reference)
    setcolor(WHITE);
    circle(xc + x, yc - y, 3);
    outtextxy(xc + x + 5, yc - y, (char*)"3D Point");

    // Draw projected 2D point
    setcolor(RED);
    circle(xc + xp, yc - yp, 4);
    outtextxy(xc + xp + 5, yc - yp, (char*)"Projected Point");

    getch();
    closegraph();
    return 0;
}

