#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    /* code */
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
