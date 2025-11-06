#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        int left = 0, right = 0;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        

        for (int l = 1; l <= n - 2; l++) {
            for (int r = l + 1; r <= n - 1; r++) {
                int s1 = 0;
                for (int i = 0; i < l; i++) {
                    s1 += a[i];
                }
                s1 %= 3;
                
                int s2 = 0;
                for (int i = l; i < r; i++) {
                    s2 += a[i];
                }
                s2 %= 3;
                
                int s3 = 0;
                for (int i = r; i < n; i++) {
                    s3 += a[i];
                }
                s3 %= 3;
                
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                    found = true;
                    left = l;
                    right = r;
                }
                if (found) break;
            }
            if (found) break;
        }

        cout << left << " " << right << "\n";
    }
    
    return 0;
}
