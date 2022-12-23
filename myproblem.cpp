#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter number of friends : ";
   cin>>n;
   map<string,int> m;
   for (int i = 0; i < n; i++)
   {
       cout<<"Enter NAME of "<<i+1<<" friend : ";
       string s1;
       cin>>s1;
       m[s1];
   }
     cout<<endl<<"Now"<<endl;
     cout<<"Enter Name with his spent money separated by a space : "<<endl;
     cout<<"At Last Enter 0(zero) for sum up : "<<endl;
         string s;int t;
  while(t)
   {
         cin>>s;
         if(s=="0")break;
         cin>>t;
         m[s]+=t;
   }
   int p=0,g=0;
  for(auto x:m){
   g++;
      p+=x.second;
  }
   
   int u=p/g;
  
   for(auto x:m){
      if(u-x.second<0){
      cout<<x.first<<" "<<"You have paid "<<x.second-u<<" etra amount"<<endl;
      }
      else{
      cout<<x.first<<" "<<"You have to pay "<<u-x.second<<" etra amount"<<endl;

      }
   }
  
   return 0;
}