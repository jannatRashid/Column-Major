#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "enter number of rows = ";
    cin >> row;
    cout << "enter number of columns = ";
    cin >> column;
    int list[row][column];
    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << "enter elements ";
            cin >> list[i][j];
        }
    }
    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%u", list[i][j]);
        }
        cout << "\n";
    }
    int *ba;
    ba = &list[0][0];
    cout << "base address" << endl;

    printf("%u", &ba);

    cout << endl;
    int x;
    int y;
    cout << "enter coordinate at x = " << endl;
    cin >> x;
    cout << "enter coordinate at y = " << endl;
    cin >> y;
    printf("%u", 8125864 + ((y * column + x) * 4));
    int u;
    int v;
    cout << endl;

    cout << "index  number ::";
    printf("%u", (y * column + x));
}