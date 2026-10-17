#include <iostream>
#include <string>
using namespace std;

int substring(string str)
{
    int len = str.size();

    if (len == 1 || !len)
    {
        return len;
    }

    int dict[128] = {};
    for (int i = 0; i < 128; i++)
    {
        dict[i] = -1;
    }

    int start = 0;
    int length = 0;

    for (int i = 0; i < len; i++)
    {
        if (dict[str[i]] >= start)
        {
            if (i - start > length)
            {
                length = i - start;
            }
            start = dict[str[i]] + 1;
        }
        dict[str[i]] = 1;
    }

    length = (length > len - start) ? length : len - start;

    if (!length)
    {
        return len;
    }
    else
    {
        return length;
    }
    return 0;
}

int main()
{
    string s = "pwwkew";
    cout << substring(s);

    return 0;
}