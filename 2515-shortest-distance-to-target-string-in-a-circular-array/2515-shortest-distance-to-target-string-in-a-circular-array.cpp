class Solution {
    int calcMinDistance(int length, int from, int to){
        int dist = abs(from-to);
        return min(dist, length-dist);
    }
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        for (int i = 0; i < n; i++){
            if (target == words[i]){
                int dist = abs(startIndex-i);
                ans = min(ans, min(dist, n-dist));
            }
        }
        if (ans == INT_MAX) return -1;
        return ans;
    }
};