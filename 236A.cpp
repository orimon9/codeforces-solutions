#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int n=0;
    int b=a.size();
    for(int i=0;i<b;i++)
    {
        if(a[i]!=a[i+1])
            n++;
    }
    if(n%2==1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}
