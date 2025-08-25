#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < n; j++) {
            A[i][j] = s[j] - '0';
        }
    }

    vector<int> row, col;

    for (int j = 0; j < n; j++) {
        row.push_back(0);
        col.push_back(j);
    }

    for (int i = 1; i < n; i++) {
        row.push_back(i);
        col.push_back(n - 1);
    }

    for (int j = n - 2; j >= 0; j--) {
        row.push_back(n - 1);
        col.push_back(j);
    }

    for (int i = n - 2; i > 0; i--) {
        row.push_back(i);
        col.push_back(0);
    }

    vector<int> vals;
    for (int i = 0; i < row.size(); i++) {
        vals.push_back(A[row[i]][col[i]]);
    }

    vector<int> rotated(vals.size());
    rotated[0] = vals.back();
    for (int i = 1; i < vals.size(); i++) {
        rotated[i] = vals[i - 1];
    }

    for (int i = 0; i < row.size(); i++) {
        A[row[i]][col[i]] = rotated[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j];
        }
        cout << "\n";
    }

    return 0;
}
