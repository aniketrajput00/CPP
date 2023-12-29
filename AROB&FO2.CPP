#include<iostream.h>
#include<conio.h>
int n;
class person
{
 public:
	int pid,dob,doi,doe;
	char pname[20],nation[20],gen[20];

	void accept()
	{
	 cout<<"Enter p_id=";
	 cin>>pid;
	 cout<<"Enter person name=";
	 cin>>pname;
	 cout<<"Enter nationality=";
	 cin>>nation;
	 cout<<"Enter gender=";
	 cin>>gen;
	 cout<<"Enter date of birth=";
	 cin>>dob;
	 cout<<"Enter date of issue=";
	 cin >>doi;
	 cout<<"Enter date of expire=";
	 cin>>doe;
	}

	void disp(int id)
	{
	 int flag=0;
	 for(int i=0;i<n;i++)
	 {
	  if(ob[i].pid==id)
	  {
	   //cout<<"person id:"<<ob[i].pid<<endl;
	   cout<<"person name:"<<ob[i].pname<<endl;
	   cout<<"nationality:"<<ob[i].nation<<endl;
	   cout<<"gender:"<<ob[i].gen<<endl;
	   cout<<"date of birth:"<<ob[i].dob<<endl;
	   cout<<"date of issue:"<<ob[i].doi<<endl;
	   cout<<"date of expire:"<<ob[i].doe<<endl;
	   flag=1;
	   break;
	  }
	 }
	 if(flag==0)
	 {
	  cout<<"Record not found...";
	 }
	}

	void disp()
	{
	 for(int i=0;i<n;i++)
	 {
	  cout<<"person id:"<<ob[i].pid<<endl;
	  cout<<"person name:"<<ob[i].pname<<endl;
	  cout<<"nationality:"<<ob[i].nation<<endl;
	  cout<<"gender:"<<ob[i].gen<<endl;
	  cout<<"date of birth:"<<ob[i].dob<<endl;
	  cout<<"date of issue:"<<ob[i].doi<<endl;
	  cout<<"date of expire:"<<ob[i].doe<<endl;
	 }
	}
}ob[100];

int main()
{
 person obj;
 int i,n,ch,id;
 clrscr();
 cout<<"Enter limit:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ob[i].accept();
 }
 do{
    cout<<"\n 1.disp one person \n 2.disp all person \n 3.exit";
    cout<<"\n Enter choice:";
    cin>>ch;
    switch(ch)
    {
     case 1:cout<<"Enter id=";
	    cin>>id;
	    obj.disp(id);
	    break;
     case 2:obj.disp();
	    break;
    }
 }while(ch<3);
 getch();
 return 0;
}
