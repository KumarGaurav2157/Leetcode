class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l1=[0]*26
        l2=[0]*26
        for ch in s:
            l1[ord(ch) - ord('a')] += 1
        for ch in t:
            l2[ord(ch) - ord('a')] += 1
        return l1==l2
       

        