
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void drawCircle(int,int,int,int);
int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

int Xc,Yc,X,Y,r,d;
printf("Enter the coordinates of centre : \n");
scanf("%d%d",&Xc,&Yc);
printf("\nEnter the radius : ");
scanf("%d",&r);

X=0;
Y=r;
d=3-(2*r);
drawCircle(Xc,Yc,X,Y);

while(X<=Y)
 {
  X=X+1;
  if(d<0)
   {
   d=d+(4*X)+6;
   Y=Y;
   }
  else
   {
   d=d+(4*(X-Y))+10;
   Y=Y-1;
   }
drawCircle(Xc,Yc,X,Y);
 }

getch();
closegraph();
}
void drawCircle(int xc,int yc,int x,int y)
{
 putpixel(xc+x,yc+y,RED);
 putpixel(xc-x,yc+y,RED);
 putpixel(xc+x,yc-y,RED);
 putpixel(xc-x,yc-y,RED);
 putpixel(xc+y,yc+x,RED);
 putpixel(xc-y,yc+x,RED);
 putpixel(xc+y,yc-x,RED);
 putpixel(xc-y,yc-x,RED);
}

