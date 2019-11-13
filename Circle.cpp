#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   circle(300, 200, 150);
   getch();
   closegraph();
   return 0;
}
