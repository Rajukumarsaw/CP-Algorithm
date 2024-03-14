#include <bits/stdc++.h>
using namespace std;
 bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
 }
 int main() {
     int a;
     cin>>a;
     bool ans=isPrime(a);
     cout<<ans<<endl;
  return 0;
}