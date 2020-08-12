#include <stdio.h>

int main()
{
    int i,s=0;
    for(i=3;i<1000;i+=3)
        s+=i;
    for(i=5;i<1000;i+=5)
        s+=i;
    for(i=15;i<1000;i+=15)
        s-=i;
    printf("%d\n",s);
    return 0;
}
