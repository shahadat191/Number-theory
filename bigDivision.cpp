#include<bits/stdc++.h>
using namespace std;

string bigDivision(string str, int div){
    reverse(str.begin(), str.end());
    string res;
    int carr = 0;
    int temp = 0;
    while (str.size()> 0) {
        temp = str.back() - '0';
        temp += (carr*10);
        res.push_back((temp/div)+48);
        
        if(temp%div == 0){
            carr = 0;
        }
        else
            carr = temp%div;
        str.pop_back();
    }
    
    res.erase(0, res.find_first_not_of('0'));
    return res;
}

int main(){
    
    string str;
    int div;
    cin>>str>>div;
    string res = bigDivision(str,div);
    cout<<res<<endl;
}
