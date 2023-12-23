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
std::pair<std::string,std::string> splitter(std::string str){
    std::string tempint;
    std::string tempdirection;
    bool commafound = 0;
    for (int i = 0 ; i < str.size(); i++){
        if(str[i] == ')' || str[i]=='(') continue;
        if (str[i] == ','){
            commafound=1;
            continue;
        }

        if (commafound) tempdirection+=str[i];
        else tempint+=str[i];

    }
    return std::make_pair(tempint,tempdirection);
}

int main(){
    std::string temp = "";
    while(std::cin>>temp){
        bool flag = 0;
        std::vector<std::string> allDirections;
        int maxWord=0;
        std::unordered_map<std::string,std::string> data;
        std::pair<std::string,std::string> tempTrimmedd = splitter(temp);
        data[tempTrimmedd.second] =tempTrimmedd.first;
        maxWord = tempTrimmedd.second.size();
        allDirections.push_back(tempTrimmedd.second);
        while (true){
            std::string temp;
            std::cin>>temp;
            if (temp == "()") break;
            std::pair<std::string,std::string> tempTrimmed = splitter(temp);
            if (data.count(tempTrimmed.second)){

                flag = 1;
            }
            data[tempTrimmed.second] =tempTrimmed.first;
            if (maxWord< tempTrimmed.second.size()) maxWord =  tempTrimmed.second.size() ;
            allDirections.push_back(tempTrimmed.second);
        }
        if(flag){
            std::cout<<"not complete"<<std::endl;
            continue;
        }

        for (std::pair<std::string,std::string> element:data){

            if (element.first == "" || data.count(element.first.substr(0,element.first.size()-1)))
                continue;
            else{
                std::cout<<"not complete"<<std::endl;
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        for(std::string &element :allDirections){
            if (element.size() == maxWord)
                continue;
            int temp = maxWord - element.size();
            std::string anotherTemp;
            while(temp--){
                anotherTemp+='A';
            }
            element = anotherTemp+element;
        }
        std::sort(allDirections.begin(),allDirections.end());
        for (std::string &elements :allDirections){
            int theOne=0;
            int i=0;
            for( ; i<elements.size(); i ++){
                if(elements[i]!= 'A'){
                    theOne = i;
                    break;
                }
            }
            if (i == elements.size()){
                std::cout<<std::stoi(data[""]);
            }
            else
                std::cout<<std::stoi(data[elements.substr(theOne,elements.size())]);
            if (elements != *(--allDirections.end())) std::cout<<" ";
        }
        std::cout<<std::endl;



    }
    return 0 ;


}




