#include <bits/stdc++.h>
using namespace std;

int calculateCost(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    
    // Find leftmost position that's not in correct place
    while (left < n && arr[left] == left + 1) {
        left++;
    }
    
    // Find rightmost position that's not in correct place  
    while (right >= 0 && arr[right] == right + 1) {
        right--;
    }
    
    if (left > right) return 0;
    return right - left + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<bool> used(n + 1, false);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] > 0) {
                used[p[i]] = true;
            }
        }
        
        // Get missing numbers
        vector<int> missing;
        for (int i = 1; i <= n; i++) {
            if (!used[i]) {
                missing.push_back(i);
            }
        }
        
        int maxCost = 0;
        
        // Try different strategies for filling zeros
        if (missing.empty()) {
            // No zeros to fill
            maxCost = calculateCost(p);
        } else {
            // Strategy 1: Fill to maximize disorder
            vector<int> temp = p;
            int missingIdx = 0;
            
            // Fill zeros with remaining numbers in reverse order to create max disorder
            sort(missing.rbegin(), missing.rend());
            
            for (int i = 0; i < n; i++) {
                if (temp[i] == 0) {
                    temp[i] = missing[missingIdx++];
                }
            }
            maxCost = max(maxCost, calculateCost(temp));
            
            // Strategy 2: Fill to minimize sorted prefix and suffix
            temp = p;
            vector<int> missing2 = missing;
            sort(missing2.begin(), missing2.end());
            missingIdx = 0;
            
            // First try to extend sorted prefix as much as possible
            for (int i = 0; i < n && missingIdx < missing2.size(); i++) {
                if (temp[i] == 0) {
                    if (missing2[missingIdx] == i + 1) {
                        temp[i] = missing2[missingIdx];
                        missingIdx++;
                    } else {
                        break;
                    }
                }
            }
            
            // Fill remaining zeros to maximize disorder
            for (int i = 0; i < n && missingIdx < missing2.size(); i++) {
                if (temp[i] == 0) {
                    // Find a number that creates maximum disorder
                    for (int j = missing2.size() - 1; j >= 0; j--) {
                        bool found = false;
                        for (int k = 0; k < missingIdx; k++) {
                            if (missing2[j] == missing2[k]) {
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            temp[i] = missing2[j];
                            missing2[j] = -1; // Mark as used
                            break;
                        }
                    }
                }
            }
            
            maxCost = max(maxCost, calculateCost(temp));
        }
        
        cout << maxCost << "\n";
    }
    
    return 0;
}
