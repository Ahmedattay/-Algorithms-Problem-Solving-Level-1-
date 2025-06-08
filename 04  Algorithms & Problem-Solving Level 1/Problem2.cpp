#include<iostream>
#include<string>
using namespace std;
string ReadName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}
void PrintName(const string& name)
{
    cout << "Your name is: " << name << endl;
}
int main()
{
    string name = ReadName();
    PrintName(name);
    return 0;
}