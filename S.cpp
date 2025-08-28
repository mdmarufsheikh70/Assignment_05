#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<char>> A(n, vector<char>(m));
    vector<vector<char>> B(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    bool possible = false;

    for (int s = 0; s < n; s++) {
        for (int t = 0; t < m; t++) {
            bool match = true;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (A[(i + s) % n][(j + t) % m] != B[i][j]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }

            if (match) {
                possible = true;
                break;
            }
        }
        if (possible) break;
    }

    cout << (possible ? "Yes" : "No") << "\n";
}
