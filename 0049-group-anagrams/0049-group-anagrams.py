class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mpp = {}
        for s in strs:
            key = "".join(sorted(s))
            if key not in mpp:
                mpp[key] = []
            mpp[key].append(s)

        return list(mpp.values())
