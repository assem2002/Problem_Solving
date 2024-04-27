#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n,t,s;
string s1,s2;
string res;
vector<bool> v;
void fill_different(){
    res.resize(n);
        char c= 'a';
    for(int i =0;i<n;i++){
        c ='a';
        while(c == s1[i] || c == s2[i]){
            c++;
        }
        if((s1[i] == s2[i]) && s ){
            s--;
            v[i] =true;
            res[i] = s1[i];
        }
        else
            res[i] = c;
    }
}
string dummy = "-1";
string &solve(){
    v.assign(n,false);
    s = n-t;
    fill_different();
    int internal_s =s;
    for(int i=0;i<n && internal_s;i++){
        if(v[i]) continue;
        res[i] = s1[i];
        v[i] =true;
        internal_s--;
    }
    for(int i=0;i<n && s;i++){
        if(v[i]) continue;
        res[i] = s2[i];
        v[i] =true;
        s--;
    }
    if(s || internal_s) return dummy;
    return res;

}


int main(){
    cin>>n>>t>>s1>>s2;
    cout<<solve();;
}

