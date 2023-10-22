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

int currentStageSquares(int stage){
    if (stage ==  1) return 1;
    else if ((stage %2)) return 2;
    else return 1;
}
int main(){
    int a,x,y;
    std::cin>>a>>x>>y;
    double stage = std::ceil((double)y/(double)a);
    if (y%a == 0 &&(y>=a || y==0)) std::cout<<-1;
    else if(x>=a || x<=(-1*a)) std::cout<<-1;
    else{
        int squares = std::ceil(stage/2)*2 - 1 + (int) stage/2;
        int currentStageSquaresCnt = currentStageSquares(stage);
        if (currentStageSquaresCnt == 2 && x==0) std::cout<<-1;
        else if ((currentStageSquaresCnt == 2 && (a>x && x>0))) std::cout<<squares;
        else if(currentStageSquaresCnt == 2 && (0>x && x>(-1*a))) std::cout<<squares-1;
        else if(currentStageSquaresCnt ==1 && x>(-1*((double)a/2))&& x<((double)a/2)) std::cout<<squares;
        else std::cout<<-1;

    }

    return 0;
}
