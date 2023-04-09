
#include<bits/stdc++.h>
using namespace std;


int main(){
   int n;
   cin>>n;
   vector<int>a1(n);
   vector<int>a2(n-1);
   vector<int>a3(n-2);
   int s1=0,s2=0,s3=0;
   for(auto &i:a1){
       cin>>i;
       s1+=i;
   }
   for(auto &i:a2){
       cin>>i;
       s2+=i;
   }
   for(auto &i:a3){
       cin>>i;
       s3+=i;
   }
   cout<<s1-s2<<endl<<s2-s3<<endl;
   return 0;
}
