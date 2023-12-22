#include<iostream.h>
#include<conio.h>

void avg(int a,int b,int c)
{
 int d=(a+b+c)/3;
 cout<<"Average of 3 integer nos="<<d;
}

void avg(float x,float y,float z)
{
 float d=(x+y+z)/3.f;
 cout<<"\n Average of 3 float nos="<<d;
}

int main()
{
 int a,b,c;
 float x,y,z;
 clrscr();
 cout<<"Enter 3 int values:";
 cin>>a>>b>>c;
 avg(a,b,c);
 cout<<"\n Enter 3 float values:";
 cin>>x>>y>>z;
 avg(x,y,z);
 getch();
 return 0;
}