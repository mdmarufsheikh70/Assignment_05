#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int N, M;
    cin >> N >> M;

    vector<string> S(N); 

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            bool valid = true;

            for (int k = 0; k < M; k++) {
                if (S[i][k] == 'x' && S[j][k] == 'x') {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}
