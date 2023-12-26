#include<iostream>
using namespace std;

class demo
{
  public:
	 int a=2;

	 void play()
	 {
	  int a=25;
	  cout<<"value="<<a<<endl;
	  cout<<"value="<<this->a;
	 }
}ob;
int main()
{
 ob.play();
}
