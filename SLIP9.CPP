#include<iostream.h>
#include<conio.h>

class person
{
 public:
      char name[20],addr[20];
      float sal,tax_amt;

      void accept()
      {
       cout<<"Enter person name:";
       cin>>name;
       cout<<"Enter addr:";
       cin>>addr;
       cout<<"Enter salary:";
       cin>>sal;
      }

      void cal()
      {
       if(sal<=20000)
       tax_amt=0;
       else if(sal<=40000)
       tax_amt=sal*5/100;
       else
       tax_amt=sal*10/100;
      }

      void disp()
      {
       cout<<"\n person name="<<name<<endl;
       cout<<"person addr="<<addr<<endl;
       cout<<"person salary="<<sal<<endl;
       cout<<"tax amount="<<tax_amt<<endl;
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