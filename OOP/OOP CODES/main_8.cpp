#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T arr[10];
    int n;
    int i;
    void accept()
    {
        cout<<"\nEnter the number of vector elements\n";
        cin>>n;
        cout<<"Enter the vector elements\n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void modify();
    void multiply();
    void display();
};

template<class T>
void vector<T>::modify()
{
    int ele;
    T val;
    int i;
    cout<<"Which element you wanna modify?\n";
    cin>>ele;
    for(i=0;i<ele-1;i++)
    {
    }
    cout<<"Enter the new value\n";
    cin>>val;
    arr[i]=val;
    for(i=0;i<n;i++)
    {
        cout<<""<<arr[i]<<"\t";
    }

}

template<class T>
void vector<T>::multiply()
{
int sc;
int i,n;
cout<<"\nEnter the scalar factor\n";
cin>>sc;
for(i=0;i<n;i++)
{
    arr[i]=arr[i]*sc;
}
}

template<class T>
void vector<T>::display()
    {
        int i;
      for(i=0;i<n;i++)
    {
        cout<<""<<arr[i]<<"\t";
    }
    }

int main()
{
    vector<int>v;
    vector<float>v1;
    v.accept();
    v.modify();
    v.multiply();
    v.display();
    v1.accept();
    v1.modify();
    v1.multiply();
    v1.display();
    return 0;
}
