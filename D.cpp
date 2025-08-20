#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    vector<vector<int>> A = {
                                {1, 2, 3},
                                {4, 5, 6}, 
                                {7, 8, 9}               
                            };

    int n, m;
    cin >> n >> m;

    if(n==3 || n==6 || n==9 || n+1 != m)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}