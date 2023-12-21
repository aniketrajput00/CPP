#include<iostream.h>
#include<conio.h>
int main()
{
 int a,b,i,ch,c;
 clrscr();
 cout<<"Enter no1:";
 cin>>a;
 cout<<"Enter no2:";
 cin>>b;
 do{
  cout<<"\n1.add"<<"\n 2.sub"<<"\n 3.multi"<<"\n 4.div";
  cin>>ch;
  cout<<"\n"<<"Enter choice:";
  switch(ch)
  {
   case 1:c=a+b;
	  cout<<"Add="<<c;
	  break;
  }
 }while(ch<2);
 getch();
 return 0;
}