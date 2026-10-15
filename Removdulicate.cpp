#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str)
{
    int count[26] = {0};
    string t;
    string s;
    
    for (int i = 0; i < str.size(); i++)
    {
        if(isspace(static_cast<unsigned char>(str[i])))
        {
            continue;
        }
    
         s.push_back(tolower(str[i]));
    }

    for (int i = 0; i < s.size(); i++)
    {
        int n = s[i] - 'a';
        count[n]++;
        if (count[n] == 1)
        {
            t.push_back(s[i]);
        }
    }

    return t;
}

int main()
{
    string str = "ProGr amming";
    cout << removeDuplicates(str);
    return 0;
}