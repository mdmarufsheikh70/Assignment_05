#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<char>> A(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] >= '1' && A[i][j] <= '9')
            {
                int power = A[i][j] - '0';
                for (int i1 = 0; i1 < n; i1++)
                {
                    for (int j1 = 0; j1 < m; j1++)
                    {
                        if (A[i1][j1] == '#')
                        {
                            int distace = abs(i1 - i) + abs(j1 - j);
                            if (power >= distace)
                            {
                                A[i1][j1] = '.';
                            }
                        }
                    }
                }
                A[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j];
        }
        cout << '\n';
    }

    return 0;
}