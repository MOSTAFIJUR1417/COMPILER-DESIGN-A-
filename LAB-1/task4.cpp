#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int Factorial=1;
    for(int i=1;i<=n;i++)
    {
        Factorial=Factorial*i;
    }
    cout<<n<<"  Factorial is : "<<Factorial;
}
