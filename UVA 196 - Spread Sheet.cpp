#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>  values;
vector<vector<bool>>  is_formula;
vector<pair<string,pair<int,int>>> formulas;


pair<int,int> evaluate_cell(string &s){
    int r=0,c=0;
    string column;
    string row;
    for(int c = 0;c < s.size();c++){
        if(s[c]<65)row+=s[c];
        else column+=s[c];
    }

    int sss = row.size()-1;
    int res=0;
    for(int i =0 ;i<=sss;++i){
        res+= (row[i] - 48)*pow(10,(sss-i));
    }
    r = res;

    int cc = column.size()-1;
    for(int i =0;i<= cc;++i){
        int n = column[i]-64;
        c+=n*pow(26,cc-i);
    }
    return {r-1,c-1};

}

void calc(pair<string,pair<int,int>> &a){
    string &s = a.first;
    long long res =0;
    string temp;
    for(int i =1;i<=s.size();i++){
        if(s[i]=='+' || i==s.size()) {
//            cout<<"move_to_result"<<temp;
            pair<int,int> move_to = evaluate_cell(temp);
//            cout<<" "<<move_to.first<<" "<<move_to.second<<"\n";
            if(is_formula[move_to.first][move_to.second]){

//                cout<<"We got to calc ->>>>>"<<values[move_to.first][move_to.second]<<"\n";
                calc(formulas[values[move_to.first][move_to.second]]);
            }
            res+=values[move_to.first][move_to.second];
            temp.clear();
        }
        else{
            temp+=s[i];
        }
    }
    values[a.second.first][a.second.second] = res;
    is_formula[a.second.first][a.second.second] = false;

}

void loop(){
    for(int i=0;i<formulas.size();i++){
        pair<string,pair<int,int>> &current = formulas[i];
        if(!is_formula[current.second.first][current.second.second]) continue;
//        cout<<"loop started"<<current.first<<"\n";
        calc(current);
    }


}

int main(){
    int n;
    cin>>n;
    while(n--){
        int c,r;
        cin>>c>>r;
        values.assign(r,vector<int>(c));
        is_formula.assign(r,vector<bool>(c,false));
        formulas.clear();
                cin.ignore(1000,'\n');
        for(int i=0;i<r;++i){
                string whole_input;
                getline(cin,whole_input);
                istringstream inp(whole_input);
            for(int j=0;j<c;++j){
                string temp;
                inp>>temp;
//                cout<<"temp->"<<temp<<"\n";
                if(temp[0]=='='){
                    formulas.push_back({temp,{i,j}});
                    is_formula[i][j] =true;
                    values[i][j] = formulas.size()-1;
                }
                else{
                    bool sign=false;
                    if(temp[0]=='-'){
                        sign=true;
                        temp = temp.substr(1);
                    }
                    int sss = temp.size()-1;
                    int res=0;
                    for(int i =0 ;i<=sss;++i){
                        res+= (temp[i] - 48)*pow(10,(sss-i));
                    }
                    if(sign) res*=-1;
                    values[i][j] = res;

//                    cout<<"HEREEEE"<<temp<<"\n";

                }
            }
        }
//        cout<<"here";
        loop();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<values[i][j];
                if(j==c-1) cout<<"\n";
                else cout<<" ";
            }
        }
    }

}


