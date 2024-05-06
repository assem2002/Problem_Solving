#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long gcdd(long long a,long long b){
    if(b == 0) return a;
    return gcdd(b,a%b);
}

long long lcmm(long long a ,long long b){
    return (a * b) / gcdd(a,b) ;
}


vector<long long> numbers;
void filler(int a,int d){
    for(int i=0;i<5;i++){
        numbers.push_back(a+(i*d));
    }
}

long long solve(long long n,long long m){
    long long ret =0;
    for(int i=0;i<5;i++){
        ret+= m/numbers[i];
        ret-= n/numbers[i];
    }
    for(int i=1;i<=32;i++){
        int cnt=0;
        long long common = 1;
        for(int j=0;j<5;j++){
            if((i>>j)%2) {
                common = lcmm(common,numbers[j]);
                cnt++;
            }
        }
        if((cnt%2 == 0) && (cnt>1)){
            ret-= m/common;
            ret+= n/common;
        }
        else if((cnt>1) && (cnt%2)){
            ret+= m/common;
            ret-= n/common;
        }
    }
    return ret;




}


int main(){
    int t;
    long long n,m,a,d;
    cin>>t;
    while(t--){
        numbers.clear();
        cin>>n>>m>>a>>d;
        filler(a,d);
        cout<<(m-n+ 1) - solve(n-1,m)<<"\n";

    }
    return 0;

}


