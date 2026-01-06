# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        maxi=float("-inf")
        level=1
        ans=0
        q=deque()
        q.append(root)
        while q:
            sum=0
            size=len(q)
            for i in range(size):
                node=q.popleft()
                sum+=node.val
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            if(sum>maxi):
                maxi=sum
                ans=level
            level+=1
        return ans
                
        