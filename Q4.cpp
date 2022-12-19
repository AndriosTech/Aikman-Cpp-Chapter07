#include<iostream>
using namespace std;

int main()
{
    int i,u;
    int arr[5], *p, min;

    p = arr;
    cout<<"enter values into an array: "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    min = *p;
    for(i=1; i<5; i++)
    {
        *p++;
        if(min>*p)
        {
            min=*p;
        }
    }
    cout<<min;
}