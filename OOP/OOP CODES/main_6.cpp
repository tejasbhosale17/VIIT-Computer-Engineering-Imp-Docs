#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int age;
    long int income;
    cout<<"Enter the age and income\n";
    cin>>age>>income;
    try
    {
    if(age<18 || age>55)
    {
        throw age;
    }
    if(income<50000 || income>100000)
    {
        throw income;
    }
    }
    catch(int x)
    {
        cout<<"Invalid data\n";
        exit(1);
    }
    catch(long int xy)
    {
        cout<<"Invalid data\n";
        exit(1);
    }
    cout<<"Entered age and income are:"<<age<<","<<income<<"\n";
    return 0;
}
