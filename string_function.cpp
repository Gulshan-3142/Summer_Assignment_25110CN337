#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str = "I like Java";
    str.replace(7, 5, "C++");

    cout << str << endl;

    string a = "Gulshan";
    string b = "kumar";
    cout << a.compare(b) << endl;

    string str1 = "g";
    // (checking string) output: 1 means non-empty OR 0 means empty;
    cout << str1.empty() << endl;

    str1.clear(); // remove all character of str1
    cout << str1.empty() << endl;

    string str2 = "gulsha";
    str2.push_back('n'); // add(last position) only a character not string
    cout << str2 << endl;
    str2.pop_back(); // remove one character from last position
    cout << str2 << endl;

    // for toupper() and tolower() function include <cctype> header file
    char ch = 'a';
    cout << (char)toupper(ch) << endl;

    char ch2 = 'B';
    cout << (char)tolower(ch2) << endl;

    string str3 = "GULSHAN";
    for (char ch : str3)
    {
        cout << (char)tolower(ch);
    }
    cout << endl;
    cout << str3 << endl;

    // change original string
    for (int i = 0; i < str3.size(); i++)
    {
        str3[i] = tolower(str3[i]);
    }
    cout << str3 << endl;
    return 0;
}