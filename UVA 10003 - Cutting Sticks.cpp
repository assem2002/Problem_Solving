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
const int maxx = 50;
int mem[maxx][maxx];
vector<int> dataa;
int solve(int i , int j){
    if((j-i)==1) return 0;
    int &ret = mem[i][j];
    if(ret!=10000000) return ret;

    for(int iter =i+1;iter<j;++iter){
        ret =min(ret,(solve(i,iter)+solve(iter,j)+(dataa[j]-dataa[i])));
    }
    return ret;
}

int main(){
    int l,n;
    while(true){
        cin>>l;
        if(!l) break;
        dataa.clear();
        cin>>n;
        dataa.push_back(0);
        for(int i=0;i<n;++i){
            int temp;
            cin>>temp;
            dataa.push_back(temp);
        }
        dataa.push_back(l);
        for(int i =0;i<=n+1;++i)
            for(int j=0;j<=n+1;++j)
                mem[i][j] =10000000;
        cout<<"The minimum cutting is "<<solve(0,n+1)<<".\n";
    }

}

