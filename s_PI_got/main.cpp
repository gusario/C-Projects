//
//  main.cpp
//  s_PI_got
//
//  Created by David Nurdinov on 24/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "variables.h"
#include <ctime>
using namespace std;
int main() {
    cin>>n;
    int maslong=10*(n+1)/3;//длинна массива
    int mass[maslong];//сам массив
    for (i=0; i<maslong; i++) {
        mass[i]=2;//1 шаг--заполнение двойками
    }
    int pi[n];//массив чисел пи
    
    start=clock();
    for(j=0;j<n+1;j++){
        for (i=maslong-1; i>=0; i--) {
     //    if(i==n/100) break;
            sum=mass[i]*10+per;
            mass[i]=sum%(i*2+1);//остаток
            per=(sum/(i*2+1))*i;
            if(j!=n){ iter++;
                oper+=9;
            }
        }
        
        int fiPi=sum/10;
        mass[0]=sum%10;
        oper+=2;
        m=j;
        pi[j] = fiPi;
        while(pi[m]==10){//хитрый ход конем, который помогает увеличивать предыдущее число на еденицу, при этом не особо обращать внимание на девятки
            pi[m]=0;
            m--;
            pi[m]++;
            oper++;
        }
        
    }
    finish=clock();
    t=finish-start;
    
    ifstream f("/Users/david/Desktop/s_PI_got/pi_check");
    for ( i=0; i<n; i++) {
        f>>char_check;
        int int_check=char_check-'0';
        if (int_check!=pi[i]) {
            kep=false;
            break;
        }
    }
    if(kep){
        cout<<"Все хорошо, можете ехать дальше"<<endl;
        for (i = 0; i < n; i++){
        cout<<pi[i];
        
        if (i == 0) cout<<".";
        }
    }
    else cout<<"Непорядок! Номера-то не совпадают"<<endl;
   
    cout<<endl;
    cout<<"ITER:"<<iter<<endl<<"OPER:"<<oper<<endl;
    cout<<"TIME:"<<(double)t/CLOCKS_PER_SEC<<" sec"<<endl;
    return 0;
}
