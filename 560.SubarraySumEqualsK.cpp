class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0; // cumulated sum
        map<int,int> rec; // prefix sum recorder
        int cnt = 0; // number of found subarray
        rec[0]++; // to take into account those subarrays that begin with index 0
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if (rec.find(sum-k) != rec.end())
                cnt += rec[sum-k];
            rec[sum]++;
        }
        return cnt;
    }
};
