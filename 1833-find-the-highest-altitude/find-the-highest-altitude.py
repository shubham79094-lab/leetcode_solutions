class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        n = len(gain)
        altitude = 0
        max_altitude = 0
        for i in range(0 , n):
            altitude = altitude + gain[i]
            if altitude > max_altitude:
                max_altitude = altitude

        return max_altitude
    