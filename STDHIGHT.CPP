#include<iostream.h>
#include<conio.h>

class emp
{
 public:
	float h;

	void accept()
	{
	 cout<<"Enter stud hight:";
	 cin>>h;
	}
}ob[100];

int main()
{
 int i,n,s=0;
 float a;
 clrscr();
 cout<<"Enter limit:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 for(i=0;i<n;i++)
 {
   s=s+ob[i].h;
 }
 a=s/n;
 cout<<"avg hight of all stud:"<<a;
 getch();
 return 0;
}