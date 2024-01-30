#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of array: ";
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cout<< "Enter array "<<i<<" index value : ";
        cin>>arr[i];
    }
    int sum;
    for(int i=0;i<x;i++)
    {
        sum=sum+arr[i];
    }
    double avg=sum/x;
    cout<<"Average Value is : "<< avg;
}
