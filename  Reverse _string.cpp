#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void findVol(string str)
{
    string vowel = "aeiou";
    int countVol = 0;
    int countCon = 0;
    for (char x : str)
    {
        if (isspace(static_cast<unsigned char>(x)))
        {
            continue;
        }
        
        x = tolower(x);
        if (isalpha(static_cast<unsigned char>(x)))
        {
            if (vowel.find(x) != string::npos)
            {
                countVol++;
            }
            else
            {
                countCon++;
            }
        }
    }

    cout << "count vowel: " << countVol << endl;
    cout << "count consonants: " << countCon << endl;
}

int main()
{
    string str = "gulshan kumar123";
    findVol(str);

    return 0;
}