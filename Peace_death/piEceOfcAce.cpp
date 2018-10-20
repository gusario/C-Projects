//
//  piEceOfcAce.cpp
//  Peace_death
//
//  Created by David Nurdinov on 14/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include "piEceOfcAce.hpp"
#include "Constant.h"
#include "Ownmath.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
void Machine(){
    int itercount=0; //подсчет итераций
    int stepcount=0; //подсчет шагов
    double myPi=0; // собственное число Пи
    double znam=1; // знаменатель для формулы
    while (modul(wikiPi-myPi)>M_accur){ //пока разница между моим Пи и с Википедии больше заданной точности выполняет
        myPi+=4*((4*power(-1,itercount)*power(5,(-1)*znam)/znam)-(power(-1,itercount)*power(239,(-1)*znam)/znam)); //сама формула
        znam+=2; //увеличение знаменателя
        itercount++;
        if ((itercount==0)||(itercount==1)){ //подсчет шага, учитывая текущую степень
            if (znam==1) stepcount+=10; //подсчет шага, учитывая знаменатель
            else stepcount+=10+2*(znam-1);
        }
        else stepcount+=10+2*(itercount-1)+2*(znam-1);//подсчет если нет спец условий со степенью или знаменателем
        
        cout<<"myPI="<<fixed<<setprecision(15)<<myPi<<"   iter="<<itercount<<"    Steps="<<stepcount<<endl;
        cout<<"WIKI="<<wikiPi<<endl;
        
    }
    cout<<"ITER="<<itercount<<endl;
    cout<<"STEP="<<stepcount<<endl;
    
    return ;
    
}


void Nilakant(){
    int itercount=0; //подсчет итераций
    
    long long stepcount=0; //подсчет щагов
    double myPi=3.0; // мое число пи
    
    
    long znam=2;//знаменатель
    
    while(modul(wikiPi-myPi)>accur){//пока разница между моим Пи и с Википедии больше заданной точности выполняет
        myPi+=((4*power(-1,itercount)))/(znam*(znam+1)*(znam+2));//сама формула
        
        itercount++;
        if ((itercount==0)||(itercount==1)) stepcount+=7; //подсчет шага, учитывая текущую степень
        else stepcount+=7+(itercount-1);//подсчет если нет спец условий со степенью
        
        znam+=2;//увеличение знаменателя
        
        
        
        
        
        cout<<"myPI="<<fixed<<setprecision(15)<<myPi<<"   iter="<<itercount<<" Steps="<<stepcount<<endl;
        cout<<"WIKI="<<wikiPi<<endl;
    }
    cout<<"ITER="<<itercount<<endl;
    cout<<"STEP="<<stepcount<<endl;
    
    return ;
}







void Vallis(){
    unsigned long itercount=0, stepcount=0;
    double myPi=2;
    long int chisl=2;
    long int znam=1;
    while (modul(wikiPi-myPi)>accur) {
        myPi*=power(chisl,2)/(znam*(znam+2));
        chisl+=2;
        znam+=2;
        itercount++;
        stepcount+=5;
        cout<<"myPI="<<fixed<<setprecision(15)<<myPi<<"   iter="<<itercount<<"    Steps="<<stepcount<<endl;
        cout<<"WIKI="<<wikiPi<<endl;
    }
    
    return ;
}


void Leibnitz(){
    int itercount=0;
    int stepcount=0;
    double myPi=0;
    long znam=1;
    while (modul(wikiPi-myPi)>accur){
        myPi+=4*power(-1, itercount)/znam;
        znam+=2;
        itercount++;
        if ((itercount==0)||(itercount==1)) stepcount+=3;
        else stepcount+=3+(itercount-1);
        
        cout<<"myPI="<<fixed<<setprecision(15)<<myPi<<"   iter="<<itercount<<"    Steps="<<stepcount<<endl;
        cout<<"WIKI="<<wikiPi<<endl;
        
    }
    return ;
}




