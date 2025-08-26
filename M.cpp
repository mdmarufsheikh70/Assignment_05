#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(M, vector<int>(N));
    vector<vector<bool>> adjacent(N + 1, vector<bool>(N + 1, false));

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }

        for(int j = 0; j < N - 1; j++)
        {
            int x = A[i][j];
            int y = A[i][j + 1];
            adjacent[x][y] = true;
            adjacent[y][x] = true;
        }
    }

    int bad_pairs = 0;

    for(int i = 1; i <= N; i++)
    {
        for(int j = i + 1; j <= N; j++)
        {
            if(!adjacent[i][j])
            {
                bad_pairs++;
            }
        }
    }

    cout << bad_pairs << endl;

    return 0;
}
