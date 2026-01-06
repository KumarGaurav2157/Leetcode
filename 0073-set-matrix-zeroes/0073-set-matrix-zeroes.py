class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        l1=[]
        l2=[]
        i=0
        for i in  range(len(matrix)):
            j=0
            for j in range(len(matrix[0])):
                if(matrix[i][j]==0):
                    l1.append(i)
                    l2.append(j)
        
        for i in l1:
            j=0
            for j in range(len(matrix[0])):
                matrix[i][j]=0
        for j in l2:
            i=0
            for i in range(len(matrix)):
                matrix[i][j]=0
        

       
        