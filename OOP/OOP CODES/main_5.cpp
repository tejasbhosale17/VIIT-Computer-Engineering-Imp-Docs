#include<iostream>
using namespace std;
template<class T>
void fun(T arr[],int n)
{
    int i,j,k;
     T temp;
for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[k])
                k=j;
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
     for(i=0;i<n;i++)
    {
        cout<<""<<arr[i]<<"\t";
    }
}

int main()
{
    int arr1[10];
    float arr2[10];
    int n,i,n1;
    cout<<"Enter the no of elements of an array\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<""<<arr1[i]<<"\t";
    }
    cout<<"\nUsing selection sort\n";
    fun(arr1,n);
    cout<<"\n.........................................\n";
    cout<<"Enter the no of elements of an array\n";
    cin>>n1;
    cout<<"Enter the array elements\n";
    for(i=0;i<n1;i++)
    {
        cin>>arr2[i];
    }

    for(i=0;i<n1;i++)
    {
        cout<<""<<arr2[i]<<"\t";
    }
    cout<<"\nUsing selection sort\n";
     fun(arr2,n1);
    return 0;
}

