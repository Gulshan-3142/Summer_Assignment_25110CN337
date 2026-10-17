#include <iostream>
#include <string>
using namespace std;

bool stringRotat(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    string str = s + s;
    if (str.find(t) == string::npos)
    {
        return false;
    }
    return true;
}

int main()
{
    string s = "abcd";
    string t = "cadb";

    if (stringRotat(s, t))
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;

    return 0;
}