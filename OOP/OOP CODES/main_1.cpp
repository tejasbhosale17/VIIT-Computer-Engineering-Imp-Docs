#include<iostream>
using namespace std;
class student
{
public:
 char name[10];
 int roll;
 char div;
 char db[10],bg[3];
 char address[20];
 long int tele,licence;
student()
{
 div='A';
 roll=13;
}
student(int tele,int licence)
{
cout<<"Enter telephone no:\n";
cin>>tele;
cout<<"licence:\n";
cin>>licence;
 this->tele=tele;
 this->licence=licence;
 cout<<"The telephone no is:"<<tele<<"\n";
 cout<<"The licence no is:"<<licence<<"\n";
}
 void accept()
{
 cout<<"Enter student name and address\n";
 cin>>name>>address;
 cout<<"Enter the date of birth and blood group\n";
 cin>>db>>bg;
}
 void display()
{
 cout<<"Name:"<<name<<"\n";
 cout<<"Address:"<<address<<"\n";
 cout<<"The division and roll no is:"<<div<<","<<roll<<"\n";
 cout<<"Date of birth:"<<db<"\n";
 cout<<"Blood group:"<<bg<<"\n";
}
 ~student()
{
 cout<<"Destructor called\n";
}
};

int main()
{
student s;
s.accept();
s.display();
student s1(8931236470,45758348);
student s2(s1);
cout<<"Copy constructor used\n";
cout<<"tele:"<<s2.tele<<" and licence:"<<s2.licence<<"\n";
return 0;
}
