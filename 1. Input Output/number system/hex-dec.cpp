#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sc scanf

int n,res,m;
string s,ss;

void readcase()
{
    cin>>s;
}

void solvecase()
{
    int i,j=0;
    n=0;
    for(i=0;i<s.size();i++)
    {
      if(s[i]=='A')
       n=(((n*10)+1)*10)+0;
      else if (s[i]=='B')
      n=(((n*10)+1)*10)+1;
       else if (s[i]=='C')
       n=(((n*10)+1)*10)+2;
       else if (s[i]=='D')
       n=(((n*10)+1)*10)+3;
       else if (s[i]=='E')
       n=(((n*10)+1)*10)+4;
       else if (s[i]=='F')
       n=(((n*10)+1)*10)+5;
       else if (s[i]=='0')
       n=(n*10)+0;
       else if (s[i]=='1')
       n=(n*10)+1;
       else if (s[i]=='2')
       n=(n*10)+2;
       else if (s[i]=='3')
       n=(n*10)+3;
       else if (s[i]=='4')
       n=(n*10)+4;
       else if (s[i]=='5')
       n=(n*10)+5;
       else if (s[i]=='6')
       n=(n*10)+6;
       else if (s[i]=='7')
       n=(n*10)+7;
       else if (s[i]=='8')
       n=(n*10)+8;
       else if (s[i]=='9')
        n=(n*10)+9;

    }
}
void printcase()
{

    cout<<n;
}


int main()
{
  while(1)

    {
        readcase();
        solvecase();
        printcase();
    }
}



