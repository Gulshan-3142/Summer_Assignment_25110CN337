#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

// implementetion of unordered_set it store unique value only
string RemoveDuplicates(string str)
{
    unordered_set<char> seen;
    string s;
   for(int i=0; i<str.size(); i++)
   {
     if(seen.find(str[i]) == seen.end())
     {
         s.push_back(str[i]);
         seen.insert(str[i]);
     }
   }
    return s;
}

string removeDuplicates(string str)
{
    int count[26] = {0};
    string t;
    string s;

    for (int i = 0; i < str.size(); i++)
    {
        if (isspace(static_cast<unsigned char>(str[i])))
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
   cout<< RemoveDuplicates(str);
    // cout << removeDuplicates(str);

    return 0;
}