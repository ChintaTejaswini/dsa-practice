class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def findBound(isFirst: bool) -> int:
            lo, hi = 0, len(nums) - 1
            index = -1
            while lo <= hi:
                mid = (lo + hi) // 2
                if nums[mid] == target:
                    index = mid
                    if isFirst:
                        hi = mid - 1  # search left
                    else:
                        lo = mid + 1  # search right
                elif nums[mid] < target:
                    lo = mid + 1
                else:
                    hi = mid - 1
            return index

        first = findBound(True)
        last = findBound(False)
        return [first, last]