class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        n = len(score)
    # pair each score with its original index, sort by score descending
        order = sorted(range(n), key=lambda i: score[i], reverse=True)
    
        result = [""] * n
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
    
        for rank, idx in enumerate(order):
            if rank < 3:
                result[idx] = medals[rank]
            else:
                result[idx] = str(rank + 1)
    
        return result