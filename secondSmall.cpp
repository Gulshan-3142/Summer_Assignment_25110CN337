#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int arr[] = {10, 5, 20, 18, 25, 156};
    int n = 6;

    int secondSmall = INT_MAX;
    int small = INT_MAX;
    for(int i=0; i<n; i++)
    {
       if(small > arr[i])
       {
          secondSmall = small;
          small = arr[i];
       }
       else if(arr[i] < secondSmall && arr[i] > small)
       {
          secondSmall = arr[i];
       }
    }

    cout<<secondSmall;
    return 0;
}