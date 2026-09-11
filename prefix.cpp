#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    const int n = 5;
    int target = 9;

    int prefix[n];
    prefix[0] = arr[0];

    // Prefix Sum
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    bool found = false;

    // l = starting index
    for(int l = 0; l < n; l++)
    {
        // r = ending index
        for(int r = l; r < n; r++)
        {
            int sum;

            if(l == 0)
                sum = prefix[r];
            else
                sum = prefix[r] - prefix[l - 1];

            if(sum == target)
            {
                cout << "Subarray found: ";

                for(int i = l; i <= r; i++)
                {
                    cout << arr[i] << " ";
                }

                cout << endl;
                found = true;
            }
        }
    }

    if(!found)
        cout << "No subarray found";

    return 0;
}