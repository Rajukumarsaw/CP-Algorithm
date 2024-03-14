#include <bits/stdc++.h>
using namespace std;

  vector<int> primeFactor(int n){
      vector<int> f;
      for(int i=2;i*i<=n;i++){
        while(n%i==0){
              f.push_back(i);
              n=n/i;
        }
      }
      if(n>1) f.push_back(n);
      return f;
   }

 int main() {
   
  int t;
  cin>>t;
  while(t--){
     int a;
     cin>>a;
     vector<int> ans=primeFactor(a);
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl;
  }
return 0;
}