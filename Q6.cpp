#include<iostream>
using namespace std;
int main ()
{
    float num[5];
    int i, j, desc;

    float *ptr;

    ptr=num;
 
    cout<<"Enter 5 Numbers : ";
 
    for (i = 0; i < 5; i++)
    {
        cin>>num[i];
    }
    
    for (i = 0; i < 5; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 5; ++j)
        {
            
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }

    cout<<"Numbers in Descending Order : \n";

    for (i = 0; i < 5; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }

}
