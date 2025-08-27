#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int n, m;
    cin >> n >> m;

    vector<vector<char>> A(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    string target = "snuke";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (j + 4 < m) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i][j + k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i + 1 << " " << j + k + 1 << '\n';
                    return 0;
                }
            }

            if (j - 4 >= 0) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i][j - k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i + 1 << " " << j - k + 1 << '\n';
                    return 0;
                }
            }

            if (i + 4 < n) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i + k][j] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i + k + 1 << " " << j + 1 << '\n';
                    return 0;
                }
            }

            if (i - 4 >= 0) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i - k][j] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i - k + 1 << " " << j + 1 << '\n';
                    return 0;
                }
            }

            if (i + 4 < n && j + 4 < m) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i + k][j + k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i + k + 1 << " " << j + k + 1 << '\n';
                    return 0;
                }
            }

            if (i + 4 < n && j - 4 >= 0) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i + k][j - k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i + k + 1 << " " << j - k + 1 << '\n';
                    return 0;
                }
            }

            if (i - 4 >= 0 && j + 4 < m) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i - k][j + k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i - k + 1 << " " << j + k + 1 << '\n';
                    return 0;
                }
            }

            if (i - 4 >= 0 && j - 4 >= 0) {
                bool match = true;
                for (int k = 0; k < 5; k++)
                    if (A[i - k][j - k] != target[k]) match = false;
                if (match) {
                    for (int k = 0; k < 5; k++)
                        cout << i - k + 1 << " " << j - k + 1 << '\n';
                    return 0;
                }
            }

        }
    }

    return 0;
}
