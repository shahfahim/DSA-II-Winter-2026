class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) arr[i] = 1;
            else arr[i] = -1;
        }

        int count = 0;

        for (int start = 0; start < n; start++) {
            int sum = 0;
            for (int end = start; end < n; end++) {
                sum += arr[end];
                if (sum > 0) count++;
            }
        }

        return count;
    }
};
