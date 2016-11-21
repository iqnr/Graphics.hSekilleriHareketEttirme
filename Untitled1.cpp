#include<conio.h>
#include<graphics.h>

int main()
{
int x1=20,y1=20,x2=40,y2=40,i;
int ek=30;
char tus;
initwindow(600,400);
setcolor(WHITE);
rectangle(x1,y1,x2,y2);
while(1)
{
tus= getch();
if(tus==27) exit(0);
else
{
setcolor(BLACK);
rectangle(x1,y1,x2,y2);
if(tus==77)
{ x1+=ek;
x2+=ek;
}
else if(tus==75)
{
x1-=ek;
x2-=ek;
}
else if(tus==72)
{
y1-=ek;
y2-=ek;
}
else if(tus==80)
{
y1+=ek;
y2+=ek;
}
setcolor(WHITE);
rectangle(x1,y1,x2,y2);
}

}
closegraph();
return 0;
}
