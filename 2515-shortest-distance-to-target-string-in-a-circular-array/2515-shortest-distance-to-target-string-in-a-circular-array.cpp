class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        for (int i = 0; i <= n/2; i++){
            if (words[(startIndex+i)%n] == target || words[(n+startIndex-i)%n] == target){
                return i;
            }
        }
        return -1;
    }
};