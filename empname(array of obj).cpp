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
 int i,n;
 char name[20];
 cout<<"Enter limit:";
 cin>>n;
 Emp ob[n];
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 cout<<"Enter name to search:";
 cin>>name;
 for(i=0;i<n;i++)
 {
  if(strcmp(ob[i].ename,name)==0)
  break;
 }

  if(i==n)
    cout<<"Rcord not found...";
    else
    ob[i].disp();
}
