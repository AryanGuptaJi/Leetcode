class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> m;
        for (const auto& i : nums1) {
            ++m[i];
        }

        vector<int> ans;
        for (const auto& i : nums2) {
            if (m[i] > 0) {
                ans.emplace_back(i);
                --m[i];
            }
        }

        return ans;
    }
};