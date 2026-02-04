// AIM: Write a program to draw basic graphics constructions like circle, line, arc, elipse and rectangle 

//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, (char*)"");
//
//    // Line
//    line(50, 50, 300, 50);
//
//    // Rectangle
//    rectangle(50, 100, 300, 200);
//
//    // Circle
//    circle(500, 150, 50);
//
//    // Ellipse
//    ellipse(500, 300, 0, 360, 80, 40);
//
//    // Arc
//    arc(200, 350, 0, 180, 80);
//
//    getch();
//    closegraph();
//    return 0;
//}

#include <graphics.h>
#include <conio.h>

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	setcolor(YELLOW);
	circle(100, 100, 50);
	
	setcolor(GREEN);
	line(200, 50, 300, 200);
	
	setcolor(WHITE);
	rectangle(50, 200, 250, 350);
	
	setcolor(YELLOW);
	arc(400, 200, 0, 90, 100);
	
	setcolor(WHITE);
	ellipse(400, 300, 0, 360, 90, 40);
	
	getch();
	closegraph();
	return 0;
}
