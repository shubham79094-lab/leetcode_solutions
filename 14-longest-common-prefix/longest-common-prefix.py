class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""
        
        # Start by assuming the first string is the common prefix
        prefix = strs[0]
        
        # Check this prefix against every other string
        for s in strs[1:]:
            # While the current string does not start with the prefix
            while not s.startswith(prefix):
                # Shorten the prefix by 1 character from the end
                prefix = prefix[:-1]
                
                # If the prefix becomes empty, there is no common prefix
                if not prefix:
                    return ""
                    
        return prefix

    