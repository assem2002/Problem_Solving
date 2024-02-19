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
string first;
string second;
int fLength,sLength;
        vector<vector<int>> voo;

int takeOrLeave(int i,int j){
    if(i==fLength || j== sLength ) return 0;
    if(voo[i][j] != -1) return voo[i][j];
    if(first[i] == second[j])
        return voo[i][j] = 1+takeOrLeave(i+1,j+1);

    int choice2 = takeOrLeave(i+1,j);   //leave it.
    int choice1 = takeOrLeave(i,j+1);   //take it.

    return voo[i][j]= max(choice1,choice2);
}

int caseN=1;
int main(){
    while(true){
        getline(cin,first);
        if(first[0] =='#') break;
        getline(cin,second);
        fLength=first.size();
        sLength=second.size();
        voo.assign(fLength,vector<int>(sLength,-1));
        cout<<"Case #"<<caseN++<<": you can visit at most "<<takeOrLeave(0,0)<<" cities.\n";
    }
    return 0;

}




















