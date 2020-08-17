#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,mx,mn;
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf("a = %d b = %d\n",a,b);

        mx=(a>b)?a:b;//  a>b == true  mx= a;
                     //   a>b == false mx=b;

        mn=(a<b)?a:b;


        printf("max = %d min = %d\n",mx,mn);



    }



}








