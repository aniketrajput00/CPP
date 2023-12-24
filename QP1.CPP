#include<iostream.h>
#include<conio.h>

class book
{
 public:
	int b_id;
	char bname[20],bauthor[20],bpub[20];

	void accept()
	{
	  cout<<"Enter b_id:";
	  cin>>b_id;
	  cout<<"Enter book name:";
	  cin>>bname;
	  cout<<"Enter book author:";
	  cin>>bauthor;
	  cout<<"Enter book publication:";
	  cin>>bpub;
	}

	void disp()
	{
	 cout<<"\n book id="<<b_id<<endl;
	 cout<<"book name="<<bname<<endl;
	 cout<<"book author="<<bauthor<<endl;
	 cout<<"book publication="<<bpub;
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