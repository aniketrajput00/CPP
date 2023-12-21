#include<iostream.h>
#include<conio.h>

class cuboid
{
 public:
	float l,b,h;

	void setvalues(float l1,float b1,float h1)
	{
	 l=l1;
	 b=b1;
	 h=h1;
	}

	void getvalue()
	{
	 cout<<"length="<<l<<endl;
	 cout<<"breath="<<b<<endl;
	 cout<<"hight="<<h<<endl;
	}
	inline float volume()
	{
	 return l*b*h;
	}
	inline float surface_area()
	{
	 return 2*((l*b)+(h*b)+(l*h));
	}
}ob;

int main()
{
float l,b,h;
clrscr();
cout<<"Enter l,b&h:";
cin>>l>>b>>h;
ob.setvalues(l,b,h);
ob.getvalue();
cout<<"\nvolume of cuboid="<<ob.volume()<<endl;
cout<<"surface area="<<ob.surface_area()<<endl;
getch();
return 0;
}