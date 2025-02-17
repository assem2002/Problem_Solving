#include <iostream>
#include<bits/stdc++.h>

int s1_end,s2_end;
std::string s1,s2;
std::vector<std::vector<int>> memo;
int sol(int s1_start, int s2_start){
    int &s = memo [s1_start][s2_start];
    if(s != -1 ) return s;
    if((s1_start > s1_end) && (s2_start > s2_end)) return s = 0;
    if((s1_start > s1_end)){
        return s = (s2_end - s2_start + 1);
    } else if ((s2_start > s2_end)){
        return s = s1_end - s1_start + 1;
    }
    if(s1[s1_start] == s2[s2_start]) {return s = sol(s1_start+1,s2_start+1);}
    return s = std::min(sol(s1_start+1,s2_start) + 1, std::min(sol(s1_start,s2_start+1) + 1, sol(s1_start+1,s2_start+1) + 1));
}
int main(){
    std::cin>>s1>>s2;
    s1_end = s1.size()-1;
    s2_end = s2.size()-1;
    memo.resize(s1_end+2,std::vector<int>(s2_end+2,-1));
    std::cout<<sol(0,0)<<std::endl;
    return 0;
}