#include<graphics.h>

int main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(320,340,100);
	rectangle(320,340,100,100);
	getch();
	closegraph();
	return 0;
}
