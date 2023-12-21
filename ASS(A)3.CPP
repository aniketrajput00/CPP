#include<iostream.h>
#include<conio.h>
int main()
{
 int n,i,d,s=0;
 clrscr();
 cout<<"Enter number:";
 cin>>n;

  while(n!=0)
  {
   d=n%10;
   s=s*10+d;
   n=n/10;
  }
 cout<<"revers number:"<<s;
 getch();
 return 0;
}