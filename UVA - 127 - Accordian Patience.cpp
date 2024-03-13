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

int mutate(vector<stack<string>> &inp,int i){
    string left="00",most_left="00",current=inp[i].top();
    left = inp[i-1].top();
    if (i>2) most_left = inp[i-3].top();
    bool left_match=false,left_most_match=false;
    if ((current[0] == left[0]) || (current[1] == left[1]) ) left_match=true;
    if ((current[0] == most_left[0]) || (current[1] == most_left[1]) ) left_most_match=true;
    int i_new =i;
    if((left_match&& left_most_match)|| (left_most_match)){
        inp[i-3].push(current);
        i_new-=3;
    }
    else if(left_match){
        inp[i-1].push(current);
        i_new-=1;
    }

    if (left_match || left_most_match){
        inp[i].pop();
        if(inp[i].empty()){
            inp.erase(inp.begin()+i);
        }
    }
    else i_new++;

    return i_new;


}

void printer (vector<stack<string>>& inp){
    string whatThehell ="piles";
    if(inp.size()==1) whatThehell ="pile";
    cout<<inp.size()<<" "<<whatThehell << " remaining:";
    for(auto &a:inp)cout<<" "<<a.size();
    cout<<"\n";
}
void solve (string &first){
    vector<stack<string>> inp(52);
    inp[0].push(first);
    for(int i=1;i<52;++i){
        string temp;
        cin>>temp;
        inp[i].push(temp);
    }
    int i =0;
    while(i<(int)inp.size()){
        if (i==0) ++i;
        else i = mutate(inp,i);
    }
    printer(inp);


}
int main(){
    while(true){
        string first;
        cin>>first;
        if(first =="#") return 0;
        solve(first);
    }

}

