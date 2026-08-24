class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        n = len(code)
        res = [0] * n

        l = 0
        sum = 0
        for r in range(n +abs(k)):
            sum += code[r % n]

            if r - l + 1 > abs(k):
                sum -= code[l % n]
                l = (l + 1) % n

            if r - l + 1 == abs(k):
                if k > 0:
                    res[(l - 1) % n] = sum
                elif k < 0:
                    res[(r + 1) % n] = sum
        return res