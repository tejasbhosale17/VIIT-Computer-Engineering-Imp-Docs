#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char city[10];
    int vehicle;
    cout<<"Enter the city and vehicle of yours\n";
    cin>>city>>vehicle;
    try
    {
        if((strcmp(city,"pune")>0) || (strcmp(city,"mumbai")>0) || (strcmp(city,"banglore")>0) || (strcmp(city,"chennai")>0))
        {
            throw city;
        }
        if(vehicle != 4)
        {
            throw vehicle;
        }
    }
    catch(char *p)
    {
        cout<<"Invalid city";
        exit(1);
    }
    catch(int x)
    {
        cout<<"Invalid vehicle\n";
        exit(1);
    }
    cout<<"The entered city and vehicle are:"<<city<<" , "<<vehicle<<"\n";
    return 0;
}
