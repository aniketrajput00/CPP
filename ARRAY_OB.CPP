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
	 cout<<"Enter emp no name sal:";
	 cin>>eno>>ename>>sal;
	}
	void disp()
	{
	 cout<<"emp no="<<eno<<endl;
	 cout<<"emp name="<<ename<<endl;
	 cout<<"salary="<<sal<<endl;
	}
}ob[5];

int main()
{
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
  ob[i].accept();
 }
 for(i=0;i<5;i++)
 {
  ob[i].disp();
 }
 getch();
 return 0;
}
