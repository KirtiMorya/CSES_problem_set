#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long long mod=1e9+7;
int main(){
    int n;
    cin>>n;
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(j>i){
                break;
            }
            dp[i]=(dp[i]+dp[i-j])%mod;
        }
    }
    cout<<dp[n]%mod<<" ";
    return 0;
}