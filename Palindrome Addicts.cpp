#include<iostream>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define pb pop_back


void solve(){
long long int n,a; cin>>a;
long long int i,x,cunt; cunt=0,x=n/2;
if(n&1) cunt++;
for(i=n/2-1;i>=0;i--)
{
    if(a[i]==a[x])
    {
        cunt+=2;
    }
    else break;

}
cout<cunt<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}

