#include <stdio.h>
#include <string.h>

int main()
{
    int n=6000,i,j;
    int prime[n];
    memset(prime,0,n*sizeof(int));
    for(i=2;i<n;i++){
        if(prime[i]==0){
            for(j=i*2;j<n;j+=i){
                prime[j]=1;
            }
        }
    }
    prime[1]=1;
    long int B[n];
    for(i=1;i<=n;i++){
        B[i]=2*i*i;
    }
    int flag=0;
    for(i=3;i<n;i+=2){
        if(prime[i]==1){
            j=1;
            while(B[j]<i){
                if(prime[i-B[j]]==0){
                    flag=1;
                    printf("%li %li ",i,B[j]);
                    break;
                }
                j++;
            }
            if(flag==1){
                printf("%li ",i);

            }
            printf("\n");
        }
    }
    // Direct Answer Not Available At Output //
    return 0;
}
