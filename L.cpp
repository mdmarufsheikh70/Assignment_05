#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    vector<vector<int>> A(9, vector<int>(9));
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> A[i][j];
            if(A[i][j] < 1 || A[i][j] > 9)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for(int i = 0; i < 9; i++)
    {
        vector<int> cnt(10, 0);
        for(int j = 0; j < 9; j++)
        {
            cnt[A[i][j]]++;
        }
        for(int k = 1; k <= 9; k++)
        {
            if(cnt[k] != 1)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for(int j = 0; j < 9; j++)
    {
        vector<int> cnt(10, 0);
        for(int i = 0; i < 9; i++)
        {
            cnt[A[i][j]]++;
        }
        for(int k = 1; k <= 9; k++)
        {
            if(cnt[k] != 1)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for(int startRow = 0; startRow < 9; startRow += 3)
    {
        for(int startCol = 0; startCol < 9; startCol += 3)
        {
            vector<int> cnt(10, 0);
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cnt[A[startRow + i][startCol + j]]++;
                }
            }
            for(int k = 1; k <= 9; k++)
            {
                if(cnt[k] != 1)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
