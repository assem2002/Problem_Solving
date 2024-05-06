
//y= kx / (x-k)
//find all possible x till y == x
//It's doable as k limit is 10000 so x would go up to just maximum of 5000  




#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v;
int n;
void solve(){
    int test =n+1;
    int up,down,res;
    while(true){
        up  = n*test;
        down = test - n;
        if(up%down == 0){
            res = up/down;
            v.push_back({res,test});
            if(test == res)break;
        }

        test++;
    }


}
void printer(){
    cout<<(int)v.size()<<"\n";
    for(pair<int,int> a :v){
        cout<<1<<"/"<<n<<" = "<<1<<"/"<<a.first<<" + "<<1<<"/"<<a.second<<"\n";
    }

}


int main(){
    while(cin>>n){
        v.clear();
        solve();
        printer();
    }


}
