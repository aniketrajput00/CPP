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
 int i,n,max,min,index,index1;
 char name[20];
 cout<<"Enter limit:";
 cin>>n;
 Emp ob[n];
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 max=ob[0].sal;
 index=0;
 for(i=1;i<n;i++)
 {
  if(ob[i].sal>max)
  {
     max=ob[i].sal;
     index=i;
  }
 } 
 min=ob[0].sal ;
 index1=0;
 for(i=1;i<n;i++)
 {
 	if(ob[i].sal<min)
 	{
 		min=ob[i].sal;
 		index1=i;
	 }
 }
 cout<<"maximum salary:"<<endl;
 ob[index].disp();  
 cout<<"minimum salary:"<<endl;
 ob[index1].disp();  

}
