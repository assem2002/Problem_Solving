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
////#include<limits>+++


using namespace std;



int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<int,int>>> data (2);
    data[0] = vector<pair<int,int>>(n,{0,0});
    data[1] = vector<pair<int,int>>(m,{0,0});
    int a,b,c;
    int operation =0;
    for(int q =0 ; q<k;++q){
        cin>>a>>b>>c;
        pair<int,int> &ret = data[a-1][b-1];
        ret.first = c;
        ret.second=++operation;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            pair<int,int> r = data[0][i];
            pair<int,int> c = data[1][j];
            if(r.second>c.second) cout<< r.first<<" ";
            else cout<<c.first<<" ";
        }
        cout<<"\n";
    }
}

