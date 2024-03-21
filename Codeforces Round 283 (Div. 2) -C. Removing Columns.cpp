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

bool arr[100];
int n,m;
string strings[100];
int cnt=0;
void solve(){
    bool change =false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[j])continue;
            if(strings[i][j]>strings[i+1][j]){
                change =true;
                arr[j]=true;
                cnt++;
            }
            else if(strings[i][j]<strings[i+1][j])break;
        }
    }
    if(change) solve();
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++)arr[i] = false;
    for(int i =0;i<n;i++){
        cin>>strings[i];
    }
    n--;
    solve();
    cout<<cnt;




}


