
from collections import deque
class Solution:
    def isValid(self, s: str) -> bool:
        st=deque()
        for ch in s:
            if(ch=='(' or ch=='{' or ch=='['):
                st.append(ch)
            else:
                if st:
                    peek=st[-1]
                    if ((ch==')' and peek=='(') or (ch=='}' and peek=='{') or (ch==']' and peek=='[')):
                        st.pop()
                    else:
                        return False
                else:
                    return False
        return len(st)==0
        