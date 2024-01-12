#include<iostream.h>
#include<conio.h>

class stud
{
 public:
      char sname[20],sclass[20];
      int rno;

      void accept()
      {
       cout<<"Enter student name=";
       cin>>sname;
       cout<<"Enter sclass=";
       cin>>sclass;
       cout<<"Enter roll no=";
       cin>>rno;
      }
};

class exam:public stud
{
 public:
	 int m1,m2,m3,m4,m5,m6;
	 void acceptm()
	 {
	  cout<<"Enter six subject marks...";
	  cout<<"java=";
	  cin>>m1;
	  cout<<"python=";
	  cin>>m2;
	  cout<<"c++=";
	  cin>>m3;
	  cout<<"clanuage=";
	  cin>>m4;
	  cout<<"rprograming=";
	  cin>>m5;
	  cout<<"networking=";
	  cin>>m6;
	 }
};

class result:public exam
{
 public:int t;
 float p;
 void cal()
 {
   t=m1+m2+m3+m4+m5+m6;
   p=t/6;
 }
 void disp()
 {
  cout<<"roll no:"<<rno<<endl;
  cout<<"student name:"<<sname<<endl;
  cout<<"sclass:"<<sclass<<endl;
  cout<<"total:"<<t<<endl;
  cout<<"per:"<<p<<endl;
 }
};

int main()
{
 result ob;
 clrscr();
 ob.accept();
 ob.acceptm();
 ob.cal();
 ob.disp();
 getch();
 return 0;
}