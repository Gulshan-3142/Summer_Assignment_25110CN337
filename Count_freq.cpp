#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

// count frequency  of target character
int countFreq(const string &str, char target)
{
    int count = 0;
    for (char ch : str)
    {
        if (ch == target)
        {
            count++;
        }
    }

    return count;
}

void countfreq(const string &str)
{
    int n = str.size();
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }

        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << str[i] << ":" << count << endl;
    }
}

// using unordered method
void CountFreq(const string &str)
{
    unordered_map<char, int> freq;
    int n = str.size();

    for (char ch : str)
    {
        freq[ch]++;
    }

    for(auto s : freq)
    {
        cout<<s.first<<":"<<s.second<<endl;
    }
}
int main()
{
    string str = "gulsnanan";
    CountFreq(str);
    //countfreq(str);
    // char target;
    // cout << "enter string: ";
    // getline(cin, str);

    // cout << "enter target: ";
    // cin >> target;

    // cout << "frequency of " << target << " : " << countFreq(str, target);

    return 0;
}