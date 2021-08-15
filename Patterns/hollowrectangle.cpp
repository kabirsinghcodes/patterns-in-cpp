#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rows, columns;
    cout << "Enter number of rows and columns : ";
    cin >> rows >> columns;
    /* code */
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
