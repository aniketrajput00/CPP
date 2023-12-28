#include<iostream>
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
 int i,num,n;
 cout<<"Enter limit:";
 cin>>n;
 Emp ob[n];
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 cout<<"Enter emp no to search:";
 cin>>num;
 for(i=0;i<n;i++)
 {
  if(ob[i].eno==num)
  break;
 }
  if(i!=n)
  ob[i].disp();
  else
  cout<<"record not found..";
}
