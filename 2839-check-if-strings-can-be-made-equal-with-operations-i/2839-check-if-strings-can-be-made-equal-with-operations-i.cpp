class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        bool equalEven = (s1[0] == s2[0] && s1[2] == s2[2]);
        bool equalOdd = (s1[1] == s2[1] && s1[3] == s2[3]);
        bool swappedEven = (s1[0] == s2[2] && s1[2] == s2[0]);
        bool swappedOdd = (s1[1] == s2[3] && s1[3] == s2[1]);
        return (equalEven && equalOdd) || (swappedEven && swappedOdd) || (equalEven && swappedOdd) || (swappedEven && equalOdd);
    }
};