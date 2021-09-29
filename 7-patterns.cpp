#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    cout << "n is: " << n << endl;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i <= row; i++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * row;
        for (int i = 1; i <= space; i++)
        {
            cout << " ";
        }
         for (int i = 1; i <= row; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

       for (int row = n; row >=1; row--)
    {
        for (int i = 1; i <= row; i++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * row;
        for (int i = 1; i <= space; i++)
        {
            cout << " ";
        }
         for (int i = 1; i <= row; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}