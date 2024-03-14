#include <bits/stdc++.h>
using namespace std;
  
  void soe(vector<bool>& sieve, int n){
        for(int i=2;i*i<=n;i++){
             if(sieve[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    sieve[j]=false;
                }
             }
        }
  }

 int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<bool> sieve(n+1, true);
     soe(sieve, n);
     for(int i=2;i<sieve.size();i++){
        if(sieve[i]==true){
            cout<<i<<" ";
        }
       
     }
      cout<<endl;
  }

return 0;
}