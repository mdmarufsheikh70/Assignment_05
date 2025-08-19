#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<int>>A(n,vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i == 0)
            {
                A[i][j] = j + 1;
            }
            else
            {
                A[i][j] = A[i-1][m-1] + j + 1;

            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << A[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}

