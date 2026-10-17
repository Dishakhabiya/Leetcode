class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> index;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int secondNum=target-nums[i];
            if(index.find(secondNum)!=index.end()){
                res.push_back(i);
                res.push_back(index[secondNum]);
                break;
            }else{
                index[nums[i]]=i;
            }
        }
        return res;
    }
};