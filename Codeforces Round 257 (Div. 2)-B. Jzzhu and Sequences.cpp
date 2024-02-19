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


int func(int mod,int x,int y){
    switch (mod){
        case 1:
            return x;
        case 2:
            return y;
        case 3:
            return y-x;
        case 4:
            return -x;
        case 5:
            return -y;
        case 0:
            return -y+x;
    }
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    cout<<((func(k%6,n,m)%1000000007)+1000000007)%1000000007;

}




















