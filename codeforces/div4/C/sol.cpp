#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> requirements(n);
        for (int i = 0; i < n; i++) {
            cin >> requirements[i].first >> requirements[i].second;
        }
        
        long long points = 0;
        int currentSide = 0;
        int currentMinute = 0;
        
        for (int i = 0; i < n; i++) {
            int targetMinute = requirements[i].first;
            int targetSide = requirements[i].second;
            
            int availableTime = targetMinute - currentMinute;

            int sidesDifferent = (currentSide != targetSide) ? 1 : 0;
            int maxMoves = availableTime;
            if ((maxMoves % 2) != (sidesDifferent % 2)) {
                maxMoves--; 
            }
            if (maxMoves < sidesDifferent) {
                points = -1; 
                break;
            }
            
            points += maxMoves;
            currentSide = targetSide;
            currentMinute = targetMinute;
        }
        
        if (points != -1) {
            int remainingTime = m - currentMinute;
            points += remainingTime; 
        }
        
        cout << points << "\n";
    }
    
    return 0;
}
