#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Solution is based on finding the closest square root to the number and based on the properties of the spiral shape we can 
// do some know steps to get to the position.
//Time Complexity is O(SZ) -> max steps is (2*10e5)

int get_n(long long n){
    long long s=1,f=100002;
    long long mid, powering;

    while(s<f){
        mid = (f+s+1ll)/2ll;
        powering = mid * mid;
        if(powering == n ) return mid;
        else if(powering > n){
            f = mid-1ll;
        }
        else{
            s = mid;
        }
    }
    return s;
}

long long sz,p;
pair<int,int> even_move(long long n ){
    int r,c = (sz+1)/2;
    r = c;
    int c_r_dash = n/2;
    c -=c_r_dash;
    r = r - c_r_dash + 1;
    long long current = n * n;
    if (current == p) return {r,c};
    current++;
    r--;
    if(current == p ) return {r,c};
    for(int i=0;i<n;++i){
        current++;
        c++;
        if(current == p ) return {r,c};
    }
    for(int i=0;i<n;++i){
        current++;
        r++;
        if(current == p ) return {r,c};
    }
    exit(0);
}

pair<int,int> odd_move(long long n ){
    int r,c = (sz+1)/2;
    r = c;
    int c_r_dash = (n+1)/2;
    c = c + c_r_dash - 1;
    r = r + c_r_dash - 1;
    long long current = n * n;
    if (current == p) return {r,c};
    current++;
    r++;
    if(current == p ) return {r,c};
    for(int i=0;i<n;++i){
        current++;
        c--;
        if(current == p ) return {r,c};
    }
    for(int i=0;i<n;++i){
        current++;
        r--;
        if(current == p ) return {r,c};
    }
    exit(0);
}

int main(){
    while(true){
        cin>>sz>>p;
        if(!(sz && p))break;
        long long n = get_n(p);
        pair<int,int> res;
        if (n%2){
            res = odd_move(n);

        }
        else{
            res = even_move(n);
        }
        cout<<"Line = "<<res.first<<", column = "<<res.second<<".\n";

    }

    return 0;

}
