#include<iostream.h>
#include<conio.h>

inline float area(int r)
{
 return 3.14*r*r;
}

inline float circum(int r)
{
 return 2*3.14*r;
}

int main()
{
 int r;
 clrscr();
 cout<<"Enter radius:";
 cin>>r;
 cout<<"\n area of circle:"<<area(r)<<endl;
 cout<<"circumference of circle:"<<circum(r);
 getch();
 return 0;
}