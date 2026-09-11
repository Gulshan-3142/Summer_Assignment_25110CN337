#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int arr[] = {10, 5, 20, 9, 25, 156};
    int n = 6;

    int max = INT_MIN;
    int secondmax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
       if (secondmax < arr[i] && arr[i] < max)
        {
            secondmax = arr[i];
        }
    }

    cout << "second max: " << secondmax << endl;
    
    return 0;
}