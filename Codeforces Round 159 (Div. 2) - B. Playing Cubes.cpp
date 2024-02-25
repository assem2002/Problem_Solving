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

//Stupid problem!

string func(int n,int m, string start){
    bool vasya =true;
    int extend = n+m;
    for(int i = 0;i<extend ;++i){
        if(vasya){
            if((start[i] == 'r') && m){
                start+='b';
                --m;

            }
            else if((start[i] == 'b') && n){
                start+='r';
                --n;
            }
            else if (!m){
                start+='r';
                --n;
            }
            else{
                start+='b';
                --m;
            }

        }
        else{
            if((start[i] == 'r') && n){
                start+='r';
                --n;

            }
            else if((start[i] == 'b') && m){
                start+='b';
                --m;
            }
            else if (!m){
                start+='r';
                --n;
            }
            else{
                start+='b';
                --m;
            }
        }
    vasya =!vasya;
    }
    return start;

}
pair<int,int> counter(string s){
    char prev = s[0];
    int fir=0,sec=0;
    for(int i=1;i<s.size();++i){
        if(s[i]==prev) fir++;
        else sec++;
        prev = s[i];
    }
    return {fir,sec};

}


int main(){
    int n,m;
    cin>>n>>m;
    pair<int,int> f = counter(func(n,m-1,"b"));
    pair<int,int> s = counter(func(n-1,m,"r"));
    if(s.first>f.first){
        cout<<s.first<<" "<<s.second;
    }
    else if(s.first<f.first){
        cout<<f.first<<" "<<f.second;
    }
    else{
        if(s.second< f.second)
            cout<<s.first<<" "<<s.second;
        else cout<<f.first<<" "<<f.second;
    }


}

