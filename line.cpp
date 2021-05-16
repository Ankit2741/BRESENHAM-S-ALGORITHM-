#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "");
    printf("Enter co-ordinates of 1st point: ");
    scanf("%d%d", &x0, &y0);
    printf("Enter co-ordinates of 2nd point: ");
    scanf("%d%d", &x1, &y1);

    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,MAGENTA);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,MAGENTA);
            p=p+2*dy;}
            x=x+1;
        }

    getch();
    closegraph();
}
