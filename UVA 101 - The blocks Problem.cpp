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


    int n;
vector<int> ground;
vector<int> linkOnTop;


//check invalidity

// 1 removestack a,b -> ground[a] = 0 -> linkontop[b] =a
//2 removestack a -> linkontop[getlast(b)]=a
// 3 removestack b -> linkontop[b] =a
//4 linkontop[getlast(b)] = a

void getBeForeme(int searchfor){
    if(searchfor == -1) return;
    for(int i =0;i< n;++i){
        if(linkOnTop[i] == searchfor){
            linkOnTop[i] =-1;
            break;
        }
    }


}

bool aretheyLinked(int node,int searchfor){
    if(linkOnTop[node] == searchfor) return true;
    if(linkOnTop[node] ==-1) return false;
    return aretheyLinked(linkOnTop[node],searchfor);
}

int getlast(int node){
    if (linkOnTop[node] == -1) return node;
    return getlast(linkOnTop[node]);

}


void removeStack(int node){
    if(node ==-1) return;
    ground[node] =node;
    int temp = linkOnTop[node];
    linkOnTop[node] =-1;
    if(temp!=-1)removeStack(temp);
}

bool invalid(int a,int b){
    return ((a==b)||aretheyLinked(a,b)||aretheyLinked(b,a));
}




void fun1(int a ,int b){
    removeStack(a);
    removeStack(linkOnTop[b]);
    getBeForeme(a);
    ground[a] = -1;
    linkOnTop[b] =a;
    return;
}
void fun2(int a,int b){
    removeStack(a);
    getBeForeme(a);
    linkOnTop[getlast(b)] = a;

    ground[a] =-1;
    return;
}
void fun3(int a,int b){
    removeStack(linkOnTop[b]);
    getBeForeme(a);
    linkOnTop[b] =a;

    ground[a]=-1;
    return;
}
void func4(int a,int b){
    getBeForeme(a);
    linkOnTop[getlast(b)] = a;
    ground[a] =-1;
}


void printer(int node){
    if (node == -1) return;
    cout<<" "<<node;
    printer(linkOnTop[node]);
}


int main(){
    cin>>n;
    ground.clear();
    ground.resize(n);
    for(int i=0;i<n;++i)ground[i] =i;
    linkOnTop.clear();
    linkOnTop.assign(n,-1);
    while(true){

        string s1,s2;
        int a,b;
        cin>>s1;
        if(s1 == "quit") break;
        cin>>a>>s2>>b;
        if(invalid(a,b)) continue;
        if(s1=="move"&& s2=="onto") fun1(a,b);
        if(s1=="move"&& s2=="over") fun2(a,b);
        if(s1=="pile"&& s2=="onto") fun3(a,b);
        if(s1=="pile"&& s2=="over") func4(a,b);
    }
    for(int i =0;i<n;++i){
        cout<<i<<":";
        if(ground[i] !=-1) printer(i);
        cout<<'\n';
    }
    return 0;

}










