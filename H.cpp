#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    vector<vector<char>>A(8, vector<char>(8));

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(A[7-i][j] == '*')
            {
                if(j==0)
                {
                    cout << "a" << i+1 << endl;
                    return 0;
                }
                else if(j==1)
                {
                    cout << "b" << i+1 << endl;
                    return 0;
                }
                else if(j==2)
                {
                    cout << "c" << i+1 << endl;
                    return 0;
                }
                else if(j==3)
                {
                    cout << "d" << i+1 << endl;
                    return 0;
                }
                else if(j==4)
                {
                    cout << "e" << i+1 << endl;
                    return 0;
                }
                else if(j==5)
                {
                    cout << "f" << i+1 << endl;
                    return 0;
                }
                else if(j==6)
                {
                    cout << "g" << i+1 << endl;
                    return 0;
                }
                else if(j==7)
                {
                    cout << "h" << i+1 << endl;
                    return 0;
                }
            }
        }
    }

    
    return 0;
}