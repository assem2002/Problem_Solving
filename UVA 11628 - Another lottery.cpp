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

long long __gcd (long long a,long long b){
    if(!b) return a;
    return __gcd(b,a%b);

}
int main(){
    while(true){

        int n,m;
        cin>>n>>m;
        if(!n && ! m)break;
        long long total =0;
        long long temp;
        vector<long long> data;
        for(int i =0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>temp;
            }
            total+= temp;
            data.push_back(temp);
        }
        for(long long i :data){
            long long ret = __gcd(i,total);
            cout<<(i/ret)<<" / "<<(total/ret)<<"\n";
        }
    }
    return 0;

}

