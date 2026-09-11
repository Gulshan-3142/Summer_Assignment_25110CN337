#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 3};
    const int n = 8;
    /* using unordered map */

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for(auto x : freq)
    {
        cout << x.first << " time: " << x.second << endl;
    }
    /* without using unordered_map */
    // bool visited[n] = {false};
    // for (int i = 0; i < n; i++)
    // {
    //     if (visited[i])
    //         continue;
    //     for (int j = i; j < n; j++)
    //     {
    //         int temp = arr[j] ^ arr[i];
    //         if (temp == 0)
    //         {
    //             freq++;
    //             visited[j] = true;
    //         }
    //     }

    //     if (freq > 0)
    //     {
    //         cout << arr[i] << " time: " << freq << endl;
    //     }
    //     freq = 0;
    // }

    return 0;
}