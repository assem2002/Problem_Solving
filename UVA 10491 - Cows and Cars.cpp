#include <iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
    double ncows,ncars,nshow,a,b,c,res;
    while(cin>>ncows){
        cin>>ncars>>nshow;
        a = ncows - nshow  + ncars - 1;
        b = (ncars/a)*ncows;
        c = (ncars/a) * (ncars-1);
        res = (b+c) / (ncars+ncows);
        printf("%0.5f\n",res);



    }


}
