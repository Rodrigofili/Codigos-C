#include <iostream>
#include "graphics.h"
#include "conio.h"
#include "dos.h"

int main(){
    int gd = DETECT, gm;
	initgraph(&gd,&gm, "C:\\TC\\BGI");
    
    outtextxy(200,200,"Loading...");
    rectangle(199,179,350,191);
    for(int i = 0; i < 150; i++){
		setcolor(2);
		rectangle(200,180,200+i,190);
		delay(100);
	}
	
	getch();
	closegraph();
}
