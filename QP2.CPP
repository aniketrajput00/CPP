#include<iostream.h>
#include<conio.h>

inline int square(int n)
{
 return n*n;
}

inline int cube(int n)
{
 return n*n*n;
}

int main()
{
 int n;
 clrscr();
 cout<<"Enter number:";
 cin>>n;
 cout<<"square of integer number="<<square(n)<<endl;
 cout<<"cube of integer number="<<cube(n)<<endl;
 getch();
 return 0;
}