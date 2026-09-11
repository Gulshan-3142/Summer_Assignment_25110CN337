#include <iostream>
using namespace std;

int main()
{
    const int n = 3;
    int arr[n] = {10, 20, 30};

    // insert cases
      int insert,index=1;
     cout<<"Enter value: ";
     cin>>insert;

     /* insert at midd */
     for(int i=n-1; i>index; i--)
     {
        arr[i] = arr[i-1];
     }
     arr[index] = insert;



    /*.   Delete  */

    /* delete from begin*/
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    /* delete from midd */
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    int newSize = n - 1;
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}