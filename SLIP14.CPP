#include<iostream.h>
#include<conio.h>

class circle
{
 public:
	 float r;

	 void accept()
	 {
	   cout<<"Enter radius of circle:";
	   cin>>r;
	 }

	 inline float dimeter()
	 {
	  return 2*r;
	 }

	 inline float circum()
	 {
	  return 2*3.14*r;
	 }

	 inline float area()
	 {
	  return 3.14*r*r;
	 }

	 void disp()
	 {
	  cout<<"\n Dimeter of circle="<<dimeter()<<endl;
	  cout<<"circumference of circle="<<circum()<<endl;
	  cout<<"area of circle="<<area()<<endl;
	 }
}ob;

int main()
{
 clrscr();
 ob.accept();
 ob.disp();
 getch();
 return 0;
}
