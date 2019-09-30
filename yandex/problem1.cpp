#include <iostream>
#include <unordered_map>

using namespace std;

long long sum() {
    long long sum = 0;
    long long n; cin >> n;
    unordered_map<long long,bool> m;
    
    for(long long i = 1; i <= n; i++) {
        long long x; cin >> x;
        if (m[x] == false) {
            m[x] = true;
            sum += x;
        }
    }

    return sum;
}

int main() {
    cout << sum();

    return 0;
}