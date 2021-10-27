//Leader of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={15,18,5,3,6,2};
    int n=sizeof(arr)/sizeof(n);
    int max=arr[n-1];//element in the most right side is always a leader array
    cout<<max<<endl;
    for(int i=4; i>=0; i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout<<max<<endl;
        }
    }
    return 0;
}