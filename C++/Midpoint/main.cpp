#include <graphics.h> 
#include <iostream>

using namespace std;
void midpoint(int x1, int y1, int x2, int y2){
	int x,y;
	x = x1;
	y = y1;
	putpixel(x, y, 1);
	
	int Dx, Dy , p;
	Dy = y2 - y1;
	Dx = x2 - x1;
	p = 2*Dy - Dx;
	
	while(x < x2){
		if(p < 0){
			p+=2*Dy;
		}
		else{
			y++;
			p+=2*Dy - 2*Dx;
		}
		x++;
		cout<<"("<<x<<", "<<y<<")\n";
        putpixel(x , y, 1);
        delay(10);
	}
}

int main(){
	initwindow(600, 600);
	
	// Dx, Dy > 0 && Dx > Dy
	midpoint(50, 50, 450, 250);
	
	getch();
	return 0;
}
