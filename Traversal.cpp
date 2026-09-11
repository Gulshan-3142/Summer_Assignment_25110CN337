#include <iostream>
#include<limits>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n] = {10, 20, 30, 40, 1};

    // print all elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // print elements in reverse
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // print elements in reverse
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    /// Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "sum: " << sum;
    cout << endl;

    // Calculate average
    cout << "avg: " << (float)sum / n;
    cout << endl;

    // Count even/odd elements
    int even = 0;
    int odd = 0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even: " << even << ", " << "Odd: " << odd;
    cout << endl;


    //Count positive/negative elements
    int positive = 0;
    int negative= 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }
    cout << "positive: " << positive << ", " << "negative: " << negative;
    cout << endl;

    //Find maximum/minimum
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max: " << max << ", " << "min: " << min;
    cout << endl;
    return 0;
}