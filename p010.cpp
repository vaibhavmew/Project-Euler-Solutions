#include<bits/stdc++.h>
using namespace std;
const int n = 2000000;
bool ar[n];
void mul(int a)
{
    if(a*2 < n){
        ar[a*2]=1;
    }
    int i = 3;int p = i*a;
    while(p < n)
    {
        if(ar[p]!=1){
           ar[p] = 1;
        }
        i+=2;p = i*a;
    }
}
long long sieve()
{
    long long sum = 2;
    for(int i = 3;i < n;i += 2)
    {
        if(ar[i] == 0)
            sum += i,mul(i);
    }
    return sum;
}
int main()
{
    cout<<sieve();
    return 0;
}
