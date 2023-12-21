#include<iostream.h>
#include<conio.h>

inline int max(int a,int b)
{
 return(a>b?a:b);
}

inline int min(int a,int b)
{
 return(a<b?a:b);
}

int main()
{
 int a,b;
 clrscr();
 cout<<"Enter number a & b:";
 cin>>a>>b;
 cout<<"Maximum no="<<max(a,b)<<endl;
 cout<<"Minimum no="<<min(a,b)<<endl;
 getch();
 return 0;
}