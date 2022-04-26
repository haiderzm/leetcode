class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        mapping = {}
        for i in range(len(nums)):
            if (target - nums[i]) in mapping.keys():
                ans.append(i)
                ans.append(mapping[target-nums[i]])
            mapping[nums[i]] = i
        return ans
                
        