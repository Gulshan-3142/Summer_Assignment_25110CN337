#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a = 'g';           // this is a single character declaretion
    string str = "Gulshan"; // this is a string declaretion
    string str1 = "kumar";
    string full = str + " " + str1;
    cout << a << endl;
    cout << str << endl;
    cout << "Length of string: " << str.size() << endl;
    cout << "first character: " << str.front() << endl; // .front() use to target first character of string
    cout << "Last character: " << str.back() << endl;   //.back() use to target last character of string

    cout << "at 2 position: " << str.at(2) << endl; // use to target at any position
    cout << full << endl;

    // append() function use to add at end of string
    // str += " Kumar" or str.append("Kumar") are same working;
    str.append(" Kumar");
    cout << str << endl;

    // using "find()" function for searching character in string;
    // find() function also give a index number;
    size_t pos = str.find("Kumar");

    // when not found any match it give 18446744073709551615 mean: string::npos
    if (pos != string::npos)
    {
        cout << "Found at index: " << pos << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // using substr(int, int) function task starting index and include number of character
    cout<<str.substr(2,9)<<endl;
    cout<<str.erase(7,1)<<endl; //use to erase character from 7 to 1
    cout<<str.insert(7," ")<<endl;
    cout<<str.replace(7,10,"Singh")<<endl;
    cout<<str.insert(7," ")<<endl;

    return 0;
}