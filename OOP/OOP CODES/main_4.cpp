#include<iostream>
#include<string.h>
using namespace std;
class personal
{
public:
char name[10];
char bd[7];
personal()
{
strcpy(name,"Riya");
strcpy(bd,"1/1/1999");
}
personal(char *n,char *b)
{
strcpy(name,n);
strcpy(bd,b);
}
void accept1()
{
cout<<"Enter the name and birth date\n";
cin>>name>>bd;
}
void display1()
{
cout<<"Name:"<<name<<",birth date:"<<bd<<"\n";
}
};

class academic
{
public:
float ssc,hsc;
academic()
{
ssc=95.7;
hsc=88;
}
void accept2()
{
cout<<"Enter the ssc and hsc marks\n";
cin>>ssc>>hsc;
}
void display2()
{
cout<<"SSC score:"<<ssc<<"%, HSC score:"<<hsc<<"%\n";
}
};

class pro
{
public:
char company[15];
int exp;
pro()
{
strcpy(company,"Accenture");
exp=10;
}
void accept3()
{
cout<<"Enter the company name and years of experience\n";
cin>>company>>exp;
}
void display3()
{
cout<<"Company:"<<company<<",Years of experience:"<<exp<<"\n";
}
};

class derived:public personal,public academic,public pro
{
public:
char surname[15];
derived()
{
strcpy(surname,"Joshi");
}
void accept()
{
cout<<"Enter the surname\n";
cin>>surname;
}
void display()
{
cout<<"Surname:"<<surname<<"\n";
}
};
int main()
{
personal p;
personal p1("Naina","2/3/1998");
derived d;
d.accept1();
d.accept2();
d.accept3();
d.accept();
d.display1();
d.display2();
d.display3();
d.display();
return 0;
}


