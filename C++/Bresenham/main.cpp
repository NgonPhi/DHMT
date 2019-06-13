#include <iostream>
#include <graphics.h>
#include <iomanip>
#define DELAY 10

using namespace std;

void Bresenham(int x1, int y1, int x2, int y2, int color){
    int Dx = x2 - x1;
    int Dy = y2 - y1;
    int p = 2*Dy - Dx;
    int c1 = 2*Dy;
    int c2 = 2*(Dy-Dx);
    int x = x1;
    int y = y1;
    putpixel(x,y,color);
    while(x < x2){
        delay(DELAY);
        if (p<0) p += c1;
        else{
            p += c2;
            y++;
        }
        x++;
        putpixel(x, y, color);
    }
}
int main(){
	initwindow(600, 600);
	
	// Dx, Dy > 0 && Dx > Dy
	Bresenham(12, 20, 22, 27, 2);
	
	getch();
	return 0;
}
