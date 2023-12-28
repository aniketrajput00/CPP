#include<iostream>
#include<string.h>
using namespace std;

class Emp
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
};

int main()
{
 int i,n,flag=0;
 cout<<"Enter limit:";
 cin>>n;
 Emp ob[n];
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 for(i=0;i<n;i++)
 {
  if(ob[i].sal>20000)
    {
     ob[i].disp();
     flag=1;
    }
 }
 if(flag!=1)
  cout<<"record not found..";
}
