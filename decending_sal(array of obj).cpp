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
 int i,n,pass;
 char name[20];
 cout<<"Enter limit:";
 cin>>n;
 Emp ob[n];
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 
 for(pass=0;pass<n;pass++)
 {
 for(i=0;i<n-pass;i++)
 {
  if(ob[i].sal<ob[i+1].sal)
  {
     Emp t=ob[i];
  	ob[i]=ob[i+1];
  	ob[i+1]=t;
  }
 }
}
  
for(i=0;i<n;i++)
 ob[i].disp();  
  }
