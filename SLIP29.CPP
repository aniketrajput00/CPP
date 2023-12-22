#include<iostream.h>
#include<conio.h>

class e_bill
{
 public:
	 char cname[20];
	 int m_id,units;
	 float total;

	 void accept()
	 {
	  cout<<"Enter customer name:";
	  cin>>cname;
	  cout<<"Enter meter id:";
	  cin>>m_id;
	  cout<<"Enter no of units:";
	  cin>>units;
	 }

	 void cal()
	 {
	  if(units<=100)
	  {
	   total=units*1;
	  }
	  else if(units<=300)
	  {
	   total=100*1;
	   units=units-100;
	   total=total+(units*2);
	  }
	  else
	  {
	   total=100*1;
	   units=units-100;
	   total=total+(200*2);
	   units=units-200;
	   total=total+(units*5);
	  }
	  total=total+150;
	  if(total>250)
	  total=total+(total*0.15);
	 }

	 void disp()
	 {
	  cout<<"\n Custmer name="<<cname<<endl;
	  cout<<" meter id="<<m_id<<endl;
	  cout<<"no of units="<<units<<endl;
	  cout<<"total charge="<<total;
	 }
}ob;

int main()
{
 clrscr();
 ob.accept();
 ob.cal();
 ob.disp();
 getch();
 return 0;
}
