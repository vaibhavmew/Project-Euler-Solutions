#include <stdio.h>
# define N 15
int main()
{
    int i,j,A[N][N];
    for(i=0;i<N;i++){
        int k=i+1;
        for(j=0;j<N;j++){
            if(k--)scanf("%d",&A[i][j]);
            else break;
        }
    }
    for(i=N-2;i>=0;i--){
        for(j=0;j<N-2;j++){
            if(A[i+1][j]>A[i+1][j+1])
                A[i][j]+=A[i+1][j];
            else
                A[i][j]+=A[i+1][j+1];
        }
    }
    printf("%d",A[0][0]);
    return 0;
}


