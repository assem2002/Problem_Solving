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

char arr[500][500];
int n,m,k;
pair<int ,int> start;

int arr_x[4] {1,0,-1,0} ;
int arr_y[4] {0,-1,0,1};
queue<pair<int,int>>q;
void solve(int i , int j){
    if(arr[i][j]=='#' || arr[i][j] == '1' || i>=n || j>=m || j<0 || i<0)
        return;
    if(arr[i][j] == '.')
        arr[i][j] = '1';

    for(int m =0;m<4;++m)
        solve(i+arr_x[m],j+arr_y[m]);

    q.push({i,j});
}




int main (){
    cin>>n>>m>>k;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            if(arr[i][j] == '.') {
                start={i,j};
            }


        }
    }
    solve(start.first,start.second);
    for(int i=0;i<k;++i){
        pair<int,int> temp = q.front();
        q.pop();
        arr[temp.first][temp.second] = 'X';
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(arr[i][j]=='1') cout<<'.';
            else cout<< arr[i][j];
        }
        cout<<"\n";
    }

}

