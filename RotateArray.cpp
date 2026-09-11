#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    //  int temp = arr[0];
    int start = 0;
    int end = n - 1;
    int k = 10;
    k = k%n;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    // while(start<end)
    // {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    // start=0;
    //  while(start<k)
    // {
    //     swap(arr[start],arr[k]);
    //     start++;
    //     k--;
    // }

    // k=4,end=n-1;
    // while(k<end)
    // {
    //     swap(arr[k],arr[end]);
    //     k++;
    //     end--;
    // }

    /* right rotate */
    // for(int i=n-1; i>0; i--)
    // {
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}