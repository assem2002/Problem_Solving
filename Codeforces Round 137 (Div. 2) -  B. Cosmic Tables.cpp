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

int arr[1001][1001];
int rows[1001];
int columns[1001];
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i =1;i<=n;i++){
        rows[i] =i;
        for(int j=1;j<=m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=1;j<=m;j++)columns[j]=j;
    char s;
    int x,y;
    for(int i=0;i<k;i++){
        getchar();
        scanf("%c%d%d",&s,&x,&y);
        if(s=='g')printf("%d\n",arr[rows[x]][columns[y]]);
        else if(s =='r') swap(rows[x],rows[y]);
        else swap(columns[x],columns[y]);
    }


}


