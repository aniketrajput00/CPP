#include<iostream.h>
#include<conio.h>

class college
{
 public:
 char cname[20],add[20];
 void acceptc()
 {
  cout<<" Enter collegename =";
  cin>>cname;
  cout<<"Enter address=";
  cin>>add;
 }
};
class stud:public college
{
public:
 char sname[20];
 int rno;
 float per;

 void accepts()
 {
  cout<<"Enter student name=";
  cin>>sname;
  cout<<"Enter roll no=";
  cin>>rno;
  cout<<"Enter per=";
  cin>>per;
 }

 void disp()
 {
  cout<<"college name:"<<cname<<endl;
  cout<<"college address:"<<add<<endl;
  cout<<"student name:"<<sname<<endl;
  cout<<"roll no:"<<rno<<endl;
  cout<<"per:"<<per<<endl;
 }
};

int main()
{
 stud ob;
 clrscr();
 ob.acceptc();
 ob.accepts();
 ob.disp();
 getch();
 return 0;
}