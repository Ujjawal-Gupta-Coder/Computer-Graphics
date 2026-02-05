// AIM: Program to clip a line using liang barsky method

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Clipping window
    int xmin = 100, ymin = 100, xmax = 400, ymax = 300;

    // Line endpoints
    float x1 = 50, y1 = 150;
    float x2 = 450, y2 = 250;

    // Draw clipping window
    setcolor(WHITE);
    rectangle(xmin, ymin, xmax, ymax);

    // Draw original line
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Liang–Barsky variables
    float dx = x2 - x1;
    float dy = y2 - y1;

    float p[4] = { -dx, dx, -dy, dy };
    float q[4] = { x1 - xmin, xmax - x1, y1 - ymin, ymax - y1 };

    float t1 = 0.0, t2 = 1.0;

    for (int i = 0; i < 4; i++)
    {
        if (p[i] == 0)
        {
            if (q[i] < 0)
            {
                closegraph();
                return 0; // Line is completely outside
            }
        }
        else
        {
            float t = q[i] / p[i];
            if (p[i] < 0)
            {
                if (t > t1) t1 = t;
            }
            else
            {
                if (t < t2) t2 = t;
            }
        }
    }

    // Draw clipped line
    if (t1 < t2)
    {
        float cx1 = x1 + t1 * dx;
        float cy1 = y1 + t1 * dy;
        float cx2 = x1 + t2 * dx;
        float cy2 = y1 + t2 * dy;

        setcolor(GREEN);
        line(cx1, cy1, cx2, cy2);
    }

    getch();
    closegraph();
    return 0;
}

