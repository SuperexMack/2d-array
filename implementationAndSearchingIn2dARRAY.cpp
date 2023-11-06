#include <bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int n, int m)
{

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            if (arr[i][j] == target)
            {

                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[3][4];

    // taking input from the 2-D Array -> row wise input

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }

    //  column wise input

    // for (int i = 0; i < 4; i++)
    // {

    //     for (int j = 0; j < 3; j++)
    //     {

    //         cin >> arr[j][i];
    //     }

    //     cout << endl;
    // }

    // now printing of the 2d array;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Enter the Element to search";
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {

        cout << "Element had been found";
    }

    else
    {

        cout << "Element had not been found";
    }

    return 0;
}