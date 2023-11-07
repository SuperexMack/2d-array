#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {

        for (int j = 3; j >= 0; j--)
        {

            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    // hence we rotated a 2-d matrix by 90 degree;

    return 0;
}