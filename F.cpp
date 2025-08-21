#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    int a, b, c, d;
    
    vector<vector<int>>A(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    cin >> a >> b >> c >> d;

    int sum = 0;
    for(int i = a-1; i <= c-1; i++)
    {
        for(int j = b-1; j <= d-1; j++)
        {
            sum += A[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}