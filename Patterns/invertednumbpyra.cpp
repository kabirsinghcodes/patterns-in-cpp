#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    /* code */
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
