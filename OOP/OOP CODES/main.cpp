#include<iostream>
using namespace std;
typedef struct doctors
{
    char name[20];
    char spec[10];
    int yoe;
}doctor;

void accept();
void display();

void accept(doctor d[])
{
    int i;
    for(i=0;i<5;i++)
    {
     cout<<"Enter the name of doctor\n";
     cin>>d[i].name;
     cout<<"Enter specialization\n";
     cin>>d[i].spec;
     cout<<"Enter years of experience\n";
     cin>>d[i].yoe;
      cout<<"========================\n";
    }
}

void display(doctor d[])
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Name:"<<d[i].name<<"\n";
        cout<<"Specialization:"<<d[i].spec<<"\n";
        cout<<"Years of experience:"<<d[i].yoe<<"\n";
        cout<<"========================\n";
    }
}

int main()
{
    doctor d[5];
    accept(d);
    cout<<"=============================\n";
    display(d);
    return 0;
}
