#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<int>> rowMatrix(n, vector<int>(m));
    vector<vector<int>> colMatrix(n, vector<int>(m));

    int val = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rowMatrix[i][j] = val++;
        }
    }

    val = 0;

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            colMatrix[i][j] = val++;
        }
    }

    int unchanged = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rowMatrix[i][j] == colMatrix[i][j])
            {
                unchanged++;
            }
        }
    }

    cout << unchanged << endl;

    return 0;
}
