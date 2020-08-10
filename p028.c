#include <stdio.h>

int main()
{   int n=1001;
    int k=(n-1)/2;
    int num=1;
    long int sum=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=4;j++){
            num+=2*i;
            sum+=num;
        }
    }
    printf("%li",sum);
    return 0;
}
