// AIM: Write a program to implement digital clock.

#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <time.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    while (!kbhit())
    {
        cleardevice();

        // Get current system time
        time_t now = time(0);
        tm *ltm = localtime(&now);

        int hour = ltm->tm_hour;
        int min  = ltm->tm_min;
        int sec  = ltm->tm_sec;

        char timeStr[20];
        sprintf(timeStr, "%02d : %02d : %02d", hour, min, sec);

        setcolor(WHITE);
        settextstyle(BOLD_FONT, HORIZ_DIR, 5);

        // Display time at center
        outtextxy(150, 200, timeStr);

        delay(1000); // update every second
    }

    getch();
    closegraph();
    return 0;
}

