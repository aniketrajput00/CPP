#include<iostream.h>
#include<conio.h>

class  stud
{
 public:
	int rno;
	char sname[20];
	float per;

	void accept();
	void disp();
}ob;

void stud::accept()
{
 cout<<"Enter rno=";
 cin>>rno;
 cout<<"Enter student name=";
 cin>>sname;
 cout<<"Enter percentage=";
 cin>>per;
}

void stud::disp()
{
 cout<<"\n roll no="<<rno<<endl;
 cout<<"student name="<<sname<<endl;
 cout<<"percentage="<<per;
}

int main()
{
 clrscr();
 ob.accept();
 ob.disp();
 getch();
 return 0;
}