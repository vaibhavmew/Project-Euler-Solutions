#include <stdio.h>
#include <string.h>
int main()
{
    long long int A[21][21],i,j;
    memset(A,0,441*sizeof(long long int));
    for(j=0;j<21;j++){
        A[0][j]=1;
    }
    for(i=1;i<21;i++){
        A[i][0]=1;
    }
    for(i=1;i<21;i++){
        for(j=1;j<21;j++){
            A[i][j]=A[i-1][j]+A[i][j-1];
        }
    }
    printf("%I64u",A[20][20]);
    return 0;
}
