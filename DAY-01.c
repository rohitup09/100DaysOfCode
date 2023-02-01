#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int min(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int maxProfit(int* prices, int pricesSize){
    int m=10000;
    int md=0;
    int i;
    for(i=0;i<pricesSize;i++)
    {
        m=min(prices[i],m);
        
        md=max(prices[i]-m,md);
    }
    return md;
}
int main()
{
    int a[3];
    a[0]=4;
    a[1]=5;
    a[2]=1;

    int k=maxProfit(a,3);
    printf("Output=%d\n",k);
}