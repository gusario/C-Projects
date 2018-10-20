//
//  Ownmath.cpp
//  Peace_death
//
//  Created by David Nurdinov on 15/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include "Ownmath.hpp"
#include <iostream>
using namespace std;
double power( double num, int n){
    if(n>=0){ //проверка степени на положительность
        double res = num;
        if (n==0) return 1; //если степень == 0, то вернет 1
        else if (n==1) return num; //если степень ==1, то вернет число, которое надо было возвести в степень
        else{           //иначе муторно перемножает число само на себя n раз
            for (int i = 1; i < n; i++){
                res *= num;
            }
            return res;
            
        }
    }
    else{ // если степень отрицательная, то все тоже самое, только число представляем в минус первой степени
        double  res=1/num;
        if (n==-1) return 1/num; // если степень -1, то вернет 1 деленное на число
        else{
            for (int i = -1; i > n; i--){ //иначе будет муторно перемножать число в -1 степени само на себя
                res *= 1/num;
            }
            return res;
        }
    }
}



double modul(double x ){        //Функция модуля
    if(x>0)return x; //если число больше 0 вернет число
    else return x*(-1); //иначе вернет число умноженное на -1
}


