class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        l1=set()
        l2=set()
        i=0
        for i in  range(len(matrix)):
            j=0
            for j in range(len(matrix[0])):
                if(matrix[i][j]==0):
                    l1.add(i)
                    l2.add(j)
        for i in  range(len(matrix)):
            j=0
            for j in range(len(matrix[0])):
                if i in l1 or j in l2:
                     matrix[i][j]=0
        
        

       
        