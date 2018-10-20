//
//  main.cpp
//  Peace_death
//
//  Created by David Nurdinov on 01/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include <iomanip>      // для функции изменения количества показываемых знаков после запятой
#include "Constant.h"   // Константы
#include "Ownmath.hpp"  //Собственные математические функции, собранные на коленке, ибо <cmath> использовать религия не позволяет
#include "piEceOfcAce.hpp" //Функции вычисления числа Пи до 15 знака
using namespace std;

int main() {
    
 // Machine();    //Формула Мэчина 1 место 10 итераций
 Nilakant();   //Формула Нилаканта 2 место  31957 итераций
  //  Leibnitz();   //Формула Лейбница 3 место >100 млн итераций
    // Vallis();   // Формула Валлиса 4 место >450 млн итераций
    
    return 0;
}
