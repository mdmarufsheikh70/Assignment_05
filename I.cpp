#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int val = A[i][j];

            bool is_min_in_row = true;
            for(int k = 0; k < m; k++)
            {
                if(A[i][k] < val)
                {
                    is_min_in_row = false;
                    break;
                }
            }

            bool is_max_in_col = true;
            for(int k = 0; k < n; k++)
            {
                if(A[k][j] > val)
                {
                    is_max_in_col = false;
                    break;
                }
            }

            if(is_min_in_row && is_max_in_col)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
