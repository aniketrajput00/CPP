#include<iostream.h>
#include<conio.h>
class emp
{
 public:
   int eno;
   char ename[20];
   float sal;

   void accept()
   {
    cout<<"Enter emp no:";
    cin>>eno;
    cout<<"Enter emp name:";
    cin>>ename;
    cout<<"Enter emp sal:";
    cin>>sal;
   }
   void disp()
   {
    cout<<"Emp no="<<eno<<endl;
    cout<<"Emp name="<<ename<<endl;
    cout<<"Emp sal="<<sal<<endl;
   }
}ob;

int main()
{
 clrscr();
 ob.accept();
 ob.disp();
 getch();
 return 0;
}