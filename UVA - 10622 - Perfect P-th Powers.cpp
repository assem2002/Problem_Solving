//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
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

long long solve(long long n,bool flag){
    long long n_temp =n;
    long long counter =0;
    for(long long i=2;i*i<=n;i++){
        counter=0;
        while(n%i == 0){
            n/=i;
            counter++;
        }
        if(n==1){
          if(counter%2 &&flag){
            return counter;
          }
          else if(!flag){
            return counter;
          }
        }
        n=n_temp;
    }
    return 1;

}


int main(){
    long long n;
    while(cin>>n && n){
        bool flag =false;
        if(n<1){
            n = n*-1;
            flag = true;
        }
        cout<<solve(n,flag)<<"\n";
    }
    return 0;

}


