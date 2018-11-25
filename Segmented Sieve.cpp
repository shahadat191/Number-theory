/*
 Shahadat Hossain
 I.C.T Department
 Comilla University
 Session: 2013-2014
 */
#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846264338
#define input freopen("/Users/shahadat/Desktop/input.txt", "r", stdin)
#define output freopen("/Users/shahadat/Desktop/output.txt", "w", stdout)

#define ms(a,b) memset(a, b, sizeof(a))
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;

bool prime[N];
void sieve(){
    ms(prime, true);
    for(int i = 4; i<=N; i+= 2)
        prime[i] = false;
    for(int i = 3; i*i<=N; i+=2){
        if(prime[i]){
            for(int j = i*i; j<=N; j+=i){
                if(prime[j])
                    prime[j] = false;
            }
        }
    }
}
bool isprime(int n){
    return prime[n];
}

void fun(int l, int r){
    bool store[r-l+1];
    ms(store, true);
    
    for(int i = 2; i*i<=r; i++){
        if(isprime(i)){
            int base = i*i;
            if(base < l){
                base = ((l+i-1)/i)*i;
            }
            for(int j = base; j<=r; j+=i){
                store[j-l] = false;
            }
        }
    }
    for(int i = l; i<=r; i++){
        if(i != 1 && store[i-l])
            cout<<i<<endl;
    }
}

int32_t main(){
    IOS;
    //input;
    //output;
    sieve();
    int t;
    cin>>t;
    while (t--) {
        int l,r;
        cin>>l>>r;
        fun(l,r);
    }
}
