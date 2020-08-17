#include<bits/stdc++.h>
using namespace std;

void swp(int *a,int *b)
{
    *a= *a ^ *b;
    *b= *a ^ *b;
    *a= *a ^ *b;

}

int main()
{
    int a,b,c,d,temp;
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf("a = %d b = %d\n",a,b);
        c=a,d=b;
        swp(&a,&b);

        printf("a = %d b = %d\n",a,b);


        printf("c = %d d = %d\n",c,d);
        temp=c+d;
        c=temp-c;
        d=temp-d;
        printf("c = %d d = %d\n",c,d);


    }



}







