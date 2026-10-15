#include <iostream>
#include <string>
using namespace std;

bool PalidromeStr(string str)
{
    int i = 0;
    int j = str.size() - 1;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);

    if (PalidromeStr(str))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}