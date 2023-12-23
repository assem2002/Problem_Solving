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
#include <bitset>
//#include<iomanip>
#include <algorithm>
#include<queue>
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
#include <unordered_map>

int grid[101][101];

void filler(std::pair<int,int> startPoint , std::pair<int,int> finishPoint ,int stepX,int stepY){
    while (true){
        grid[startPoint.first][startPoint.second] =1;
        if (startPoint.first == finishPoint.first &&startPoint.second == finishPoint.second ) break;
        startPoint.first+=stepX;
        startPoint.second+=stepY;
    }

}


void insideFiller(std::pair<int,int> startPoint , std::pair<int,int> finishPoint ,int stepX,int stepY,int theMoveY,int theMoveX){
    startPoint.first+=stepX;
    startPoint.second+=stepY;
    while (true){
    std::pair<int,int>temp  =startPoint;
        temp.second+=theMoveY;
        temp.first+=theMoveX;
        while (true){
            if (grid[temp.first][temp.second] == 1 || grid[temp.first][temp.second] == -1) break;
            grid[temp.first][temp.second] = 1;
            temp.second+=theMoveY;
            temp.first+=theMoveX;
        }
        if (startPoint.first == finishPoint.first &&startPoint.second == finishPoint.second ) break;
        startPoint.first+=stepX;
        startPoint.second+=stepY;
    }
}
int main() {
    int n,d;
    std::cin>>n>>d;
    for (int i = 0 ; i<=100 ; i++)
        for (int j = 0 ;  j<=100 ; j++)
            grid[i][j] = 0;

    std::pair<int,int> firstPoint{0,d},secondPoint{d,0},thirdPoint{n,n-d},fourthPoint{n-d,n};
    filler(firstPoint , secondPoint , 1,-1);
    filler(firstPoint ,fourthPoint ,1,1);
    filler(thirdPoint,fourthPoint ,-1,1 );
    filler(thirdPoint ,secondPoint ,-1,-1);
    // A loop would have been better choice 
    grid[firstPoint.first][firstPoint.second+1]=-1;
    grid[firstPoint.first][firstPoint.second-1]=-1;
    grid[secondPoint.first+1][secondPoint.second]=-1;
    grid[secondPoint.first-1][secondPoint.second]=-1;
    grid[thirdPoint.first][thirdPoint.second+1]=-1;
    grid[thirdPoint.first][thirdPoint.second-1]=-1;
    grid[fourthPoint.first+1][fourthPoint.second]=-1;
    grid[fourthPoint.first-1][fourthPoint.second]=-1;
    
    insideFiller(firstPoint,fourthPoint,1,1,-1,0);
    insideFiller(secondPoint,thirdPoint,1,1,1,0);
    insideFiller(firstPoint,secondPoint,1,-1,1,0);
    insideFiller(thirdPoint,fourthPoint,-1,1,-1,0);
    //Loop to plot the shape
//    for (int i = 0 ; i<=100 ; i++){
//        std::cout<<"\n";
//        for (int j = 0 ;  j<=100 ; j++)
//            std::cout<<grid[i][j]<<" ";
//    }

    int m;
    std::cin>>m;
    for (int i = 0 ; i < m ; i++){
        int tempX,tempY;
        std::cin>>tempX>>tempY;
        if (grid[tempX][tempY] == 1) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;

    }


}




