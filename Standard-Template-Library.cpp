#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string str = "ProGramming";

    unordered_set<char> s;


    for (int i = 0; i < str.size(); i++)
    {
        if (s.find(str[i]) == s.end())
        {
            cout << str[i];
            s.insert(str[i]);
        }
    }

    return 0;
}