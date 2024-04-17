#include <iostream>
#include<bits/stdc++.h>

using namespace std;



//It's a fibonacci series
int main(){

    long long n;
    cin>>n;
    if(n ==2) cout<<1;
    else if (n<5) cout<<2;
    else if(n<8) cout<<3;
    else if(n<13) cout<<4;
    else{
        long long res=8;
        long long ret =3;
        queue<long long> q ;
        q.push(5);
        q.push(8);
        while(res<=n){
            res+=q.front();
            q.pop();
            q.push(res);
            ret++;
        }
        cout<<ret;
    }
