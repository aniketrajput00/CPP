#include<iostream.h>
#include<conio.h>
int main()
{
 int d,n,i;
 clrscr();
 for(i=1;i<1000;i++)
 {
  s=0;
  while(n!=0)
  {
   d=n%10;
   s=s+d*d*d;
   n=n/10;
  }
  cout<<"Armstrong number:"<<s;
 }
 getch();
 return 0;
}