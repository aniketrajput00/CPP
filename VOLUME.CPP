#include<iostream.h>
#include<conio.h>

void volume(int s)
{
 int v=s*s*s;
 cout<<"Volume of cube="<<v;
}

void volume(float r,float h)
{
 float v=3.14*r*r*h;
 cout<<"\ volume of cylinder="<<v;
}

void volume(double l,double w,double h)
{
 double v=l*w*h;
 cout<<"\n volume of rectangle="<<v;
}

int main()
{
 clrscr();
 volume(10);
 volume(5.2f,10.2f);
 volume(4.2,1.2,3.2);
 getch();
 return 0;
}