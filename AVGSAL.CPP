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
}ob[100];

int main()
{
 int i,num,n,s=0,a;
 clrscr();
 cout<<"Enter limit:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 for(i=0;i<n;i++)
 {
   s=s+ob[i].sal;
 }
 a=s/n;
 cout<<"avg sal of all emp:"<<a;
 getch();
 return 0;
}