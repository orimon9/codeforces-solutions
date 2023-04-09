#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,x=0;
    cin>>b;
    for(long long i=1; i*i<=b;i++)
    {
        if(b%i==0)
        {
            if(i*i==b)
                x++;
            else
                x+=2;
        }
    }
    cout<<x;

}
