#include <iostream>
using namespace std;
int main()
{
    int n=4;

    int num = 65;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            char ch = char(num);
            cout << ch << " ";
        }
        num = num + 1;
        cout << endl;
    }
    return 0;
}

