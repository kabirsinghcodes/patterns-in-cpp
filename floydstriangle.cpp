#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    int numb = 1;
    /* code */
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }
    return 0;
}
