#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> primes;

void get_primes(long long m){
    primes.clear();
    for(long long i=2 ;i*i<=m;i++){
        while(m%i==0){
            m/=i;
            primes.push_back(i);
        }
    }
    if(m!=1){
        primes.push_back(m);
    }

}

unordered_map<int,int> extra;
unordered_map<int,int> invalid;

bool solve(int n,int m){
    extra.clear();
    invalid.clear();
    get_primes(m);
    int rem;
    long long current_main, current;
    for(int i=0;i<(int)primes.size();i++){
        current_main = primes[i];
        long long looper =1;
        while(true){
            current = current_main * looper++;
            if(current > n) return false;
            if(invalid[current] ==0){
                if(extra[current] != 0){
                    --extra[current];
                }
                else{
                    invalid[current] = -1;
                }
                rem = current/current_main; //which is the looper, but I'm 7aniook.
                if(rem != 1){
                    if(invalid[rem] == -1){
                        invalid[rem] =0;
                    }
                    else extra[rem]++;


                }
            break;
            }
        }
    }
    return true;

}

int main(){

    long long n,m;
    while(cin>>n>>m){
        bool res = solve(n,m);
        if(res){
            cout<< m<<" divides "<<n<<"!\n";
        }
        else{
            cout<<m <<" does not divide "<<n<<"!\n";
        }
    }
}
