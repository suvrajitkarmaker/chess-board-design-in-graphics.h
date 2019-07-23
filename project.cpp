#include<stdio.h>
#include<graphics.h>;
#include<dos.h>;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"");
    int x=100,y=10;
    int border_color = WHITE,fg=0;
    for(int ro=1; ro<=8; ro++)
    {
        for(int co=1; co<=8; co++)
        {
            if(fg==0)
            {
                setcolor(border_color);
                setfillstyle(SOLID_FILL,WHITE);
                rectangle(x,y,x+50,y+50);
                floodfill(x+1,y+1,border_color);
            }
            else
            {
                setcolor(border_color);
                setfillstyle(SOLID_FILL,BLACK);
                rectangle(x,y,x+50,y+50);
                floodfill(x+1,y+1,border_color);
            }
            fg^=1;
            x+=50;
        }
        fg^=1;
        delay(100);
        x=100;
        y+=50;
    }
    getch();
    closegraph();
    return 0;
}
