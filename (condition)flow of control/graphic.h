#include<stdio.h>

int main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm, "");
	circle(50,50,10);
	return 0;
}
