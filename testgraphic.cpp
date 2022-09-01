#include<graphics.h>
int main(void)
{
	int gd=DETECT ,gm;
	initgraph(&gd,&gm, (char*) "");
	circle (100,100,10);
	getch();
	closegraph();
	return 0;
	
}
