#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C\TURBEC3\BGI");
	circle(320,340,100);
	getch();
	closegraph();
	return 0;
}

