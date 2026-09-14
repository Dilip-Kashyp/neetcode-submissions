# given --> nums [1, 2, 3, 3]
# return --> true or false
# if a number occore twice then return true else false

# approach
#     use 2 for loops check search number with rest of number
# use a hashmap, count the frequency,return if freq more then 1
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        container = set()
        for indx, val in enumerate(nums):
            if val in container:
                return True;
            container.add(val)
        return False