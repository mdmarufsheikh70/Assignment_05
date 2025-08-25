#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    vector<vector<char>>A(n+1, vector<char>(m+1));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> A[i][j];
        }
    }

    int counts = 0;
    for(int i = a; i >= 1 ; i--)
    {
        if(A[i][b] == '#')
        {
            break;
        }
        else
        {
            counts++;
        }
    }

    for(int i = a+1; i <= n ; i++)
    {
        if(A[i][b] == '#')
        {
            break;
        }
        else
        {
            counts++;
        }
    }

    for(int i = b-1; i >= 1 ; i--)
    {
        if(A[a][i] == '#')
        {
            break;
        }
        else
        {
            counts++;
        }
    }

    for(int i = b+1; i <= m ; i++)
    {
        if(A[a][i] == '#')
        {
            break;
        }
        else
        {
            counts++;
        }
    }

    cout << counts << endl;
    return 0;
}