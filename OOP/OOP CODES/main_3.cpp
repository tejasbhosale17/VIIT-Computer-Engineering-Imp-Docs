#include<iostream>
using namespace std;
class complex
{
 public:
 int real,img;
 complex()
{
  real=11;
  img=22;
  cout<<"The first complex number is:"<<real<<" + "<<img<<"i \n";
}
complex(int real,int img)
{
 this->real=real;
 this->img=img;
 cout<<"The second complex number is:"<<real<<" + "<<img<<"i\n";
}
 void operator +(complex &c);
 void operator*(complex &c);
 void operator>>(complex &c);
 void operator<<(complex &c);
};

void complex::operator +(complex &c)
{
 complex temp;
 temp.real=real+c.real;
 temp.img=img+c.img;
 cout<<"After addition the complex number is:\n";
 cout<<""<<temp.real<<"+"<<temp.img<<"i\n";
}

void complex::operator*(complex &c)
{
 complex temp;
 temp.real=real*c.real;
 temp.img=img*c.img;
 cout<<"After multiplication the complex number becomes:\n";
 cout<<""<<temp.real<<"+"<<temp.img<<"i\n";
}

void complex::operator>>(complex &c)
{
 cout<<"Enter the first complex no(another)\n";
 cin>>real>>img;
 cout<<"Enter the second complex no(another)\n";
 cin>>c.real>>c.img;
}

void complex::operator<<(complex &c)
{
 cout<<"First complex no:"<<real<<"+"<<img<<"i\n";
 cout<<"Second complex no:"<<c.real<<"+"<<c.img<<"i\n";

}

int main()
{
complex c1;
complex c2(2,5);
c1+c2;
c1*c2;
c1>>c2;
c1<<c2;
return 0;
}
