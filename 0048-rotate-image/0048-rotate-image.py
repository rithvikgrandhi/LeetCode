class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        res=[]
        for j in range(len(matrix[0])):
            tmp=[]
            for i in range(len(matrix)-1,-1,-1):
                #print(matrix[i][j])
                tmp.append(matrix[i][j])
                
            res.append(tmp)
        #print(res)
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                matrix[i][j]=res[i][j]
    
    
    
        return                
        