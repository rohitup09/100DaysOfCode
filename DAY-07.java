class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int m=mat.length;
        int n=mat[0].length;
        if(m*n!=r*c)
            return mat;
        int[][] a=new int[r][c];
        int f=0;
        int l=0;
        for(byte i=0;i<m;i++){
            for(byte j=0;j<n;j++){
                a[f][l]=mat[i][j];
                l++;
                if(l==c){
                    l=0;
                    f++;
                }
            }
        }
        return a;
    }
}
