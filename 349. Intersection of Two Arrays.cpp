class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> a(nums1.begin(), nums1.end()), b(nums2.begin(), nums2.end());
        vector<int> ans;
        set_intersection (a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));
        return ans;
    }
};