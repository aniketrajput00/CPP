#include<iostream.h>
#include<conio.h>

void sort(int a[100],int n)
{
 int pass,i,t;
 for(pass=0;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(a[i]>a[i+1])
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
 }
 cout<<"sorted int array=";
 for(i=0;i<n;i++)
 {
  cout<<"\t"<<a[i];
 }
}
void sort(float a[100],int n)
{
 int pass,i;
  float t;
 for(pass=0;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(a[i]>a[i+1])
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
 }
 cout<<"\n sorted float array=";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<"\t";
 }
}


void main()
{
 clrscr();
 int a[]={10,5,32,11};
 float b[]={10.2f,8.2f,30.2f};
 sort(a,4);
 sort(b,3);
 getch();
}