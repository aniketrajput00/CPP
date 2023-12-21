#include<iostream.h>
#include<conio.h>

class str
{
 public:
  void display_str(char s1[100])
  {
   cout<<"\n string="<<" \" "<<s1<<" \" ";
  }

  void display_str(int n,char s1[100])
  {
   cout<<"\n n characters=";
   for(int i=0;i<n;i++)
   cout<<s1[i];
  }

  void display_str(int m,int n,char s1[100])
  {
   cout<<"\n string from m to n=";
   for(int i=m;i<n;i++)
   cout<<s1[i];
  }
}ob;

int main()
{
 char s1[100];
 clrscr();
 cout<<"Enter string:";
 cin>>s1;
 ob.display_str(s1);
 ob.display_str(4,s1);
 ob.display_str(2,7,s1);
 getch();
 return 0;
}