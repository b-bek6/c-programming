#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(void)
{
	int gdrive=DETECT, gmode;
	int midx,midy,radious;
	initgraph(&gdrive,&gmode,"c:\\TC\\bgi");
	printf("enter the radious of the circle: ");
	scanf("%d",& radious);
	midx=germaxx()/2;
	midy=getmaxy()/2;
	circle(midx,midy,radious);
	return 0;
}
