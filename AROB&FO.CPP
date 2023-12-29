#include<iostream.h>
#include<conio.h>
#include<string.h>
int n;
class college
{
 public:
	 int c_id,year;
	 char cname[20],uname[20];

	 void accept()
	 {
	  cout<<"Enter college id=";
	  cin>>c_id;
	  cout<<"Enter college name=";
	  cin>>cname;
	  cout<<"Enter establishment year=";
	  cin>>year;
	  cout<<"Enter university name=";
	  cin>>uname;
	 }

	 void disp(char uniname[20])
	 {
	  for(int i=0;i<n;i++)
	  {
	   if(strcmp(ob[i].uname,uniname)==0)
	   {
	    cout<<"College id:"<<ob[i].c_id<<endl;
	    cout<<"College name:"<<ob[i].cname<<endl;
	    cout<<"year:"<<ob[i].year<<endl;
	    cout<<"university name:"<<ob[i].uname<<endl;
	   }
	  }
	 }

	 void disp(int y)
	 {
	  for(int i=0;i<n;i++)
	  {
	   if(ob[i].year==y)
	   {
	    cout<<"College id:"<<ob[i].c_id<<endl;
	    cout<<"College name:"<<ob[i].cname<<endl;
	    cout<<"year:"<<ob[i].year<<endl;
	    cout<<"university name:"<<ob[i].uname<<endl;
	   }
	  }
	 }
}ob[100];

int main()
{
	college obj;
 int i,ch,y;
 char uniname[20];
 clrscr();
 cout<<"Enter limit:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 do{
  cout<<"\n 1.disp uniname wise \n 2.disp year wise \n 3.exit";
  cout<<"\n Enter choice:";
  cin>>ch;
  switch(ch)
  {
     case 1:cout<<"Enter uniname:";
	    cin>>uniname;
	    obj.disp(uniname);
	    break;
     case 2:cout<<"Enter year:";
	    cin>>y;
	    obj.disp(y);
	    break;
  }
 }while(ch<3);
 getch();
 return 0;
}
