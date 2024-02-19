//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
#include<cmath>
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
////#include<limits>
//
using namespace std;

int maxN = 100004;
vector<bool> sieveArr(maxN,true);
vector<int> primes;
void seive(){
    sieveArr[0] = false;
    sieveArr[1] = false;
    for(int j=4 ; j<maxN ; j+=2){
        if(sieveArr[j]) sieveArr[j]=false;
    }
    primes.push_back(2);
    int i =3;
    for(;i*i<= maxN ;i+=2){
        if(!sieveArr[i]) continue;
        primes.push_back(i);
        for(int j=i+i ; j<maxN ; j+=i){
            if(sieveArr[j]) sieveArr[j]=false;
        }
    }
    i-=2;
    for(;i<maxN;++i){
        if(sieveArr[i])primes.push_back(i);
    }

}

int main(){
    seive();
    int n,m;
    cin>>n>>m;
    long long columdprefix[m]{0};
    int temp;
    long long mini=1000000;
    for(int i=0;i<n;++i){
        long long rowestimation=0;
        for(int j=0;j<m;++j){
            cin>>temp;
            int res = *lower_bound(primes.begin(),primes.end(),temp)-temp ;
            rowestimation+=res;
            columdprefix[j]+=res;
        }
        mini = min(rowestimation,mini);
    }
    mini =min(*min_element(columdprefix,columdprefix+m),mini);
    cout<<mini;


}




















