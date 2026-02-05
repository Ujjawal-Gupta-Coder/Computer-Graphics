//AIM: Write a program to draw a circle using midpoint implementation method

#include <graphics.h>
#include <iostream>
#include <conio.h>
int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int xc = 300, yc = 200, r = 150;
	int x = 0, y = r, d = 5/4 - r;
	
	while(x <= y) {
		putpixel(x+xc, y+yc, YELLOW);
		putpixel(x+xc, -y+yc, YELLOW);
		putpixel(-x+xc, y+yc, YELLOW);
		putpixel(-x+xc, -y+yc, YELLOW);
		putpixel(y+xc, x+yc, YELLOW);
		putpixel(y+xc, -x+yc, YELLOW);
		putpixel(-y+xc, x+yc, YELLOW);
		putpixel(-y+xc, -x+yc, YELLOW);
		std::cout<<"("<<x<<", "<<y<<") ";
		
		if(d >= 0) {
			y--;
			d = d + 2*(x-y) + 5;
		}
		else {
			d = d + 2*x + 3;
		}
		x++;
	}
	
	getch();
	closegraph();
	return 0;
}
