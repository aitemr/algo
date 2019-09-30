#include <iostream>
#include <vector>

using namespace std;

int n, a[2000000], cnt[3][3], b[2000000];
vector <int> v[3][3];

int main () {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        cnt[a[i] % 2][i % 2]++;
        v[a[i] % 2][i % 2].push_back(a[i]);
    }

    int even = n / 2;
    int odd = n - even;
    int mn = 299999999;
    if (even == cnt[0][0] + cnt[0][1] && odd == cnt[1][1] + cnt[1][0]) {
        if (mn > cnt[1][0] + cnt[0][1]) {
            mn = cnt[1][0] + cnt[0][1];
            for(int i = 1; i <= n; ++i) {
                if (i % 2 == 0 && a[i] % 2 != 0) {
                    b[i] = v[0][1].back();
                    v[0][1].pop_back();
                    continue;
                }
                if (i % 2 != 0 && a[i] % 2 == 0) {
                    b[i] = v[1][0].back();
                    v[1][0].pop_back();
                    continue;
                }
                b[i] = a[i];
            }
        }

    }

    if (even == cnt[1][1] + cnt[1][0] && odd == cnt[0][0] + cnt[0][1]) {
        if (mn > cnt[0][0] + cnt[1][1]) {
            mn = cnt[0][0] + cnt[1][1];

            for(int i = 1; i <= n; ++i) {
                if (i % 2 == 0 && a[i] % 2 == 0) {
                    b[i] = v[1][1].back();
                    v[1][1].pop_back();
                    continue;
                }
                if (i % 2 != 0 && a[i] % 2 != 0) {
                    b[i] = v[0][0].back();
                    v[0][0].pop_back();
                    continue;
                }
                b[i] = a[i];
            }
        }
    }
    
    if (mn == 299999999) {
        cout << -1;
        
        return 0;
    }

    cout << mn << endl;

    for(int i = 1; i <= n; ++i) cout << b[i] << ' ';

    return 0;
}