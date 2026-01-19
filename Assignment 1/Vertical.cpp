#include <iostream>
using namespace std;
int main() {
    int rows = 3; 

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= (rows - i) * 2; j++)
        {
            cout << " ";
        }

        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        num = num - 2;
        for (int j = 1; j < i; j++) 
        {
            cout << num;
            num--;
        }

        cout << endl;
    }

    return 0;
}
