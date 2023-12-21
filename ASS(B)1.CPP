#include<iostream.h>
#include<conio.h>
int main()
{
 int i,j,n;
 char ch;
 clrscr();
 cout<<"Enter rows:";
 cin>>n;
 cout<<"Enter characters:";
 cin>>ch;
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
  {
   cout<<ch<<" ";
   ch++;
  }
  cout<<"\n";
 }
 getch();
 return 0;
}