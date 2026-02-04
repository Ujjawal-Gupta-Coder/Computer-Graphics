// AIM: Write a program to draw basic graphics constructions like circle, line, arc, elipse and rectangle 

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
