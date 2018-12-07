/*
 Shahadat Hossain
 I.C.T Department
 Comilla University
 Session: 2013-2014
 */
 
#include<bits/stdc++.h>
using namespace std;

string add(string a, string b){
    int carr = 0;
    string res;
    while (a.size() > 0 || b.size() > 0) {
        int s1 = (a.size() > 0 ? a.back(): '0') - '0';
        if(a.size()>0) a.pop_back();
        int s2 = (b.size() > 0 ? b.back() : '0') - '0';
        if(b.size() > 0) b.pop_back();
        carr += s1 + s2;
        res.push_back((carr%10) + 48);
        carr /= 10;
    }
    if(carr > 0) res.push_back(carr+48);
    reverse(res.begin(), res.end());
    return res;
}


int32_t main(){
    string a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}
