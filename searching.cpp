#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 8, 2, 9, 2, 7};
    int n = 7;

    int target;
    cout << "Enter input: ";
    cin >> target;
    int found =1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i << " ";
            found=0;
        }

    }
    if(found)
    {
        cout<<"element not found";
    }

    return 0;
}