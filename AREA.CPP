#include<iostream.h>
#include<conio.h>

class area
{
 public:
 void rect(float l,float w)
 {
  float a=l*w;
  cout<<"area of rectangle="<<a<<endl;
 }

 void cir(float r)
 {
  float a=3.14*r*r;
  cout<<"area of circle="<<a<<endl;
 }

 void tri(float b,float h)
 {
  float a=0.5*b*h;
  cout<<"area of triangle="<<a<<endl;
 }
}ob;

int main()
{
 float l,w,r,b,h;
 clrscr();
 cout<<"Enter length & width=";
 cin>>l>>w;
 ob.rect(l,w);
 cout<<"Enter radius=";
 cin>>r;
 ob.cir(r);
 cout<<"Enter breath & hight=";
 cin>>b>>h;
 ob.tri(b,h);
 getch();
 return 0;
}