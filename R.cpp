#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<vector<int>> A(n + 1, vector<int>(n + 1));
    vector<vector<int>> B(n + 1, vector<int>(n + 1));
    vector<vector<int>> C(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> B[i][j];
        }
    }

    int t = 4;
    int flag_1 = 0;
    while (t--)
    {
        int flag_2 = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (A[i][j] == 1 && B[i][j] == 0)
                {
                    flag_2 = 0;
                }
            }
        }
        if (flag_2 == 1)
        {
            flag_1 = 1;
            break;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    C[i][j] = A[n + 1 - j][i];
                }
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    A[i][j] = C[i][j];
                }
            }
        }
    }

    if (flag_1 == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}