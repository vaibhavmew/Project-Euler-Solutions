#include <stdio.h>
#include <math.h>
#define LIMIT 10000

int factors(int n){
    int sum=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum=sum+i+n/i;
        }
    }
    if(sqrt(n)*sqrt(n)==n){
        sum-=sqrt(n);
    }
    sum+=1;
    return sum;
}

int main()
{
    int sum=0;
    long int final=0;
    for(int i=219;i<10000;i++){
        sum=factors(i);
        if(sum>i && sum<LIMIT){
            int sum2=factors(sum);
            if(sum2==i){
                printf("%d %d\n",sum,sum2);
                final=final+sum+sum2;
            }
        }
        sum=0;
    }
    printf("%li ",final);
    return 0;
}
