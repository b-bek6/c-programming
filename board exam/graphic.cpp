#include<stdio.h>
#include<graphics.h>
int main(void){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(300,100,200);
	closegraph ();
	getch();
}
