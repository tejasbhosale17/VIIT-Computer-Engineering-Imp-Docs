#include<iostream>
#include<string.h>
using namespace std;
static int count;
class student
{
    public:
    char name[10];
    int rn,dd,mm,yy,tele[10],lc[10];
    char cl[10],div;
    char bg[3];
    char address[20];
    student(int r)
    {
        rn=r;
        cout<<"Roll no:"<<this->rn<<"\n";
    }
    inline void accept()
    {
        cout<<"Enter the name,class and division and roll number\n";
        cin>>name>>cl>>div>>rn;

        count++;
    }
    static int counting()
    {
        return count;
    }
    void display();
    friend void d(student &ss);

};

void student::display()
{
    cout<<"Roll number:"<<this->rn<<"\n";
}

void d(student &ss)
{
 cout<<"Using frd function roll number:"<<ss.rn<<"\n";
}

int main()
{
    student s(13);
    student s2(47);
    int x;
    s.accept();
    s.accept();
    s.accept();
    x=s.counting();
    cout<<"Number of times accept function called:"<<x<<"\n";
    s2.display();
    d(s2);
    int l;
    l=strlen(s.name);
    char *p;
    p=new char[l+1];
    strcpy(p,s.name);
    cout<<"Using dynamic memory allocation:"<<p<<"\n";
    int *q;
    q=new int;
    *q=s2.rn;
    cout<<""<<*q<<"\n";
    return 0;
}
