#include<iostream.h>
#include<conio.h>

void area(float r=4.5f)
{
 float a=3.14*r*r;
 cout<<"\n Area of circle="<<a;
}

 void circum(float r=5.6f)
 {
  float a=2*3.14*r;
  cout<<"\n circumference of circle="<<a;
 }

 int main()
 {
  clrscr();
  area();
  circum();
  getch();
  return 0;
 }
