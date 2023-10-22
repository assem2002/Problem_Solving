//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
#include <iostream>
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
//#include<iomanip>
#include <algorithm>
//#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<string>
int main(){
    int n,m;
    std::cin>>n>>m;
    std::multiset<int> grid[n+1];
    for (int i = 0 ; i<m ; i++){
        int a,b;
        std::cin>>a>>b;
        if (grid[a].size() == 0) grid[a].insert(a);
        grid[a].insert(b);
        if (grid[b].size() == 0) grid[b].insert(b);
        grid[b].insert(a);
    }
    for (int  i = 1 ; i <(n+1);i++){
        if (grid[i].size()==0) continue;
        for(int myFriend:grid[i]){
            if (myFriend == i) continue;
            if (grid[i].size() != grid[myFriend].size()){
                std::cout<<"NO";
                return 0;
            }

            if (grid[i]!=grid[myFriend]){
                std::cout<<"NO";
                return 0 ;
            }

            grid[myFriend].clear();
        }
        grid[i].clear();
    }
    std::cout<<"YES";
    return 0;

}
