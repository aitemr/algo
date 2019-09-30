#include <iostream>

using namespace std;

const int N = (int)101;
int a[N][N], b[N][N], answer[N][N]; 
int n,m,k;

bool isValid(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

void play() {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int countActive = 0, countStable = 0;
            for(int dx = -1; dx <= 1; dx++) {
                for(int dy = -1; dy <= 1; dy++) {
                    int x = dx + i, y = dy + j;
                    if(dx != 0 && dy != 0) continue;
                    if(dx == 0 && dy == 0) continue;
                    
                    if(isValid(x, y)) {
                        if(a[x][y] == 2) countStable++;
                        if(a[x][y] == 3 || a[x][y] == 2) countActive++;
                    }
                }
            }
            
            int value = 0;
            if(countStable > 1) value = 2;
            else if(countActive > 0) value = 3;
            else value = 1;
            if(a[i][j] != value) answer[i][j]++;
            b[i][j] = value;
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            a[i][j] = b[i][j];
        }
    }
}

int main(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= k; i++) {
        play();
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}