#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,4,6,7,8,9,5,1,3}, i, num, index;
    cout<<"Enter array element: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
}
