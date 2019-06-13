#include <iostream>
#include <graphics.h>
#include <iomanip>
#include <math.h>

#define DELAY 10

using namespace std;
int color = WHITE;
int i = 0;

// Thuat toan DDA
void lineDDA(int x1, int y1, int x2, int y2){
	int Dx = x2 - x1;
	int Dy = y2 - y1;
	float x_inc, y_inc;
	float step = max(abs(Dx), abs(Dy));
	x_inc = Dx / step;
	y_inc = Dy / step;
	
	float x = x1;
	float y = y1;
	putpixel(x, y, color);
	
	int k = 1;
	while(k <= step){
		k++;
		delay(DELAY); // thoi gian tre khi ve 1 dem anh
		x += x_inc;
		y += y_inc;
		cout<<i++<<":\tx = "<<x<<"\ty = "<<y<<"\ty: "<<round(y)<<endl;
		putpixel(round(x), round(y), color);
	}
}

// Thuat toan DDA - m
//void lineDDA(int x1, int y1, int x2, int y2){
//    int Dx = x2 - x1, Dy = y2 - y1;
//    int x = x1;
//    float y = y1;
//    float m = (float)Dy/Dx;     // he so goc m
//    cout<<"m :" <<m<<endl;
//    cout<<"|    i|"<<"   xi|"<<"   yi|"<<"    y|\n";
//    putpixel(x, round(y), color);
//    cout<<"|"<<setw(5)<<i++<<"|"<<setw(5)<<x<<"|"<<setw(5)<<round(y)<<"|"<<setw(5)<<y<<"|\n";
//    while(x < x2){
//        //delay(10);
//        x++;
//        y += m;
//        putpixel(x,round(y), color);
//        //cout<<"|"<<setw(5)<<i++<<"|"<<setw(5)<<x<<"|"<<setw(5)<<round(y)<<"|"<<setw(5)<<y<<"|\n";
//    }
//}

int main(){
	initwindow(600, 600);	
	
	// line DDA
	lineDDA(12,20,22,27);//1
	//lineDDA(10,20,70,150);//2
	//lineDDA(70,20,10,150);//3
	//lineDDA(150,10,20,70);//4
	
	//lineDDA(150,70, 20,10);//5
//	lineDDA(70,150,10,20);//6
//	lineDDA(10,150,70,20);//7
//	lineDDA(20,70,150,10);//8

	getch();
	return 0;
}
