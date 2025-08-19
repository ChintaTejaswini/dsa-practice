class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        arrive=arrivalTime+delayedTime
        if arrive>=24:
            arrive=arrive-24
        return arrive