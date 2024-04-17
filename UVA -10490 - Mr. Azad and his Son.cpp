//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
//#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
//#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>+++

using namespace std;

long long solve(long long number){
    long long i=2;
    for(; i*i<= number;i++){
            while(number%i==0){
                number/=i;
            }
    }
    if(number>1){
        return number;
    }
    return number;

}


int main(){
    long long n=0;
    long long c =1 ;
    long long res;
    while(true){
        cin>>n;
        if(n==0) break;
        long long f=1;
        f = (f<<n)-1;
        res = solve(f);
        long long a=1;
        long long b=1;
        c= (a<<(n-1)) * ((b<<n)-1);
        if(res==f){
            cout<<"Perfect: "<<c<<"!\n";
        }
        else if (solve(n)==n){
            cout<<"Given number is prime. But, NO perfect number is available.\n";
        }
        else {
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
        }
    }
    return 0;
}


