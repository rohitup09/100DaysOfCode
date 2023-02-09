class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m=matrix.length;
        int n=matrix[0].length;
        int k[][]=new int[m][2];
        for(byte i=0;i<m;i++)
        {
            k[i][0]=matrix[i][0];
            k[i][1]=matrix[i][n-1];
        }
        int pos=0;
        for(byte i=0;i<m;i++)
        {
            if(target>=k[i][0] && target<=k[i][1])
                pos=i;
        }
        for(byte i=0;i<n;i++)
        {
            if(matrix[pos][i]==target)
            return true;
        }
        return false;
    }
}
