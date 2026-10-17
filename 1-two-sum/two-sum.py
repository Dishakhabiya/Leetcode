class Solution(object):
    def twoSum(self, nums, target):
        dict={}
        for i in range(len(nums)):
            value=target-nums[i]
            if value in dict:
                return [dict[value],i]
            dict[nums[i]]=i
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        