//
//  main.cpp
//  test div
//
//  Created by David Nurdinov on 02/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
static  double const wikiPi=3.141592653589793238462643;
static double const accur=0.0000000000000001;//accur=0.0000000000000006159;
int power( int num,  double k){
    int ch = num;
    if(k == 0)
        return 1;
    if (k == 1)
        return num;
    if (k >= 2) {
        for( int i = 2; i <= k; i++)
            num = num * ch;
    }
    return num;
    
}
double modul(double x ){
    if(x>0)return x;
    else return x*(-1);
}
int Nikita(){
    int itercount=0;
    
    // int stepcount=0;
   double myPi=3.0;
    
    
    long znam=2;
    cout<<"tru=="<<fixed<<setprecision(15)<<wikiPi<<endl;
    while(modul(wikiPi-myPi)>accur){
       // myPi+=(4*pow(-1,itercount))/(znam*(znam+1)*(znam+2));
        myPi+=4/(znam*(znam+1)*(znam+2));
       
        
        if(itercount%2==0) myPi+=4/(znam*(znam+1)*(znam+2));
        else myPi-=4/(znam*(znam+1)*(znam+2));
       itercount++;
        znam+=2;
      
        cout<<power(-1,itercount)<<endl;
        
        
        
        cout<<"myPI="<<fixed<<setprecision(15)<<myPi<<"   iter="<<itercount<<endl;
       // cout<<"WIKI="<<fixed<<setprecision(15)<<wikiPi<<endl;
    }
    
    
    return itercount;
    // return stepcount;
}



int main() {
    int  c=Nikita();
    cout<<"tru=="<<wikiPi<<endl;
    Nikita();
    cout<<"WIKI="<<wikiPi<<endl;
    cout<<"Itera="<<c<<endl;
    
    
    return 0;
}
