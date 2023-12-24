#include<iostream.h>
#include<conio.h>

void max(int a,int b)
{
 if(a>b)
 cout<<"maximum integer number:"<<a<<endl;
 else
 cout<<"maximum integer number:"<<b<<endl;
}

void max(float x,float y)
{
 if(x>y)
 cout<<"maximum float number:"<<x<<endl;
 else
 cout<<"maximum float number:"<<y<<endl;
}

void min(int a,int b)
{
 if(a<b)
 cout<<"minimum int number:"<<a<<endl;
 else
 cout<<"minimum int number:"<<b<<endl;
}

void min(float x,float y)
{
 if(x<y)
 cout<<"minimum float number:"<<x<<endl;
 else
 cout<<"minimum float number:"<<y<<endl;
}

int main()
{
 int a,b;
 float x,y;
 clrscr();
 cout<<"Enter two int number:";
 cin>>a>>b;
 max(a,b);
 min(a,b);
 cout<<"\n Enter two float number:";
 cin>>x>>y;
 max(x,y);
 min(x,y);
 getch();
 return 0;
}