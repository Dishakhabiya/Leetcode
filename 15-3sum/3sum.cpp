class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>> res;
       int sum=0;
        for(int i=0;i<nums.size()-2;i++){
            sum=0;
             int j=i+1;
            int k=nums.size()-1;
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            while(j<k){
                sum=nums[i];
                 sum+=(nums[j]+nums[k]);
                if(sum==0){
                    vector<int> resSet;
                   
                    resSet.push_back(nums[i]);
                    resSet.push_back(nums[j]);
                    resSet.push_back(nums[k]);
                    res.push_back(resSet);
                    j++;k--;
                    while((j<k) && nums[j]==nums[j-1]){
                    j++;
                    }
                    while((k>j) && nums[k]==nums[k+1]){
                    k--;
                    }
                    }
                else if(sum<0){
                    j++;
                    while((j<k) && nums[j]==nums[j-1]){
                    j++;
                    }
                }else{
                    k--;
                    while((k>j) && nums[k]==nums[k+1]){
                    k--;
                    }
                    
                }

               
            }
           
        }
         
        return res;
    }
};