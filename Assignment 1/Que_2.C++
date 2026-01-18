#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name,city;
    cout<<"Welcome to this world of programming"<<endl;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your city name: ";
    getline(cin,city);
    cout<<"You entered the following details: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Country: India"<<endl;
    cout<<"Thank you!! for entering the information";
    return 0;
}
