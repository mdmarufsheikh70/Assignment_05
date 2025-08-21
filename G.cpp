#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> m >> n;
    
    vector<vector<int>> A(n, vector<int>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        for(int j = 0; j < n; j++)
        {
            if(A[j][i] == m)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}