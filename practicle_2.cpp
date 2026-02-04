#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Original triangle coordinates
    int x1 = 100, y1 = 100;
    int x2 = 150, y2 = 50;
    int x3 = 200, y3 = 100;

    // Draw original object
    setcolor(GREEN);
    drawTriangle(x1, y1, x2, y2, x3, y3);

    // ---- Translation ----
//    int tx = 0, ty = 0;
//    x1 += tx; y1 += ty;
//    x2 += tx; y2 += ty;
//    x3 += tx; y3 += ty;

    // ---- Rotation ----
//    float angle = 45 * 3.14159 / 180; // 45 degrees
//    int xr1 = x1 * cos(angle) - y1 * sin(angle);
//    int yr1 = x1 * sin(angle) + y1 * cos(angle);
//
//    int xr2 = x2 * cos(angle) - y2 * sin(angle);
//    int yr2 = x2 * sin(angle) + y2 * cos(angle);
//
//    int xr3 = x3 * cos(angle) - y3 * sin(angle);
//    int yr3 = x3 * sin(angle) + y3 * cos(angle);

//     ---- Scaling ----
    float sx = 1.5, sy = 1.5;
    int xr1 *= sx; 
	int yr1 *= sy;
    int xr2 *= sx; 
	int yr2 *= sy;
    int xr3 *= sx; 
	int yr3 *= sy;

    // Draw transformed object
    setcolor(RED);
    drawTriangle(xr1, yr1, xr2, yr2, xr3, yr3);

    getch();
    closegraph();
    return 0;
}
