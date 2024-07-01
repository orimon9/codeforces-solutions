#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    int m;
    cin >> n >> m;

    int count = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i * i + j * j) % m == 0) {
                ++count;
            }
        }
    }

    long long f_blocks = (n / m) * (n / m);
    long long t_v_cel = f_blocks * count;

    int rem = n % m;

    for (int i = 0; i < rem; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i * i + j * j) % m == 0) {
                t_v_cel += (n / m);
            }
        }
    }

    for (int j = 0; j < rem; ++j) {
        for (int i = 0; i < m; ++i) {
            if ((i * i + j * j) % m == 0) {
                t_v_cel += (n / m);
            }
        }
    }

    for (int i = 0; i < rem; ++i) {
        for (int j = 0; j < rem; ++j) {
            if ((i * i + j * j) % m == 0) {
                ++t_v_cel;
            }
        }
    }

    cout << t_v_cel << endl;
    return 0;
}
