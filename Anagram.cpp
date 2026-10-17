#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool coutfreq(string s, string t)
{
   if(s.size() != t.size())
        {
            return false;
        }

       int count[26] = {0};
        for(int i=0; i<s.size(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int i=0; i<26; i++)
        {
            
            if(count[i] != 0)
            {
                return false;
            }
        }

        return true;
}

int main()
{
    string str1 = "abb";
    string str2 = "abb";
    if (coutfreq(str1, str2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}