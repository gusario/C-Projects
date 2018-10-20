//
//  main.cpp
//  Legacy
//
//  Created by David Nurdinov on 18/04/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include "people.hpp"

int main() {
    human man("iwahd", "ekdqw", "pdpw", 1);
    student student("iwahd", "ekdqw", "pdpw", 1, 10232);
    teacher teacher("iwahd", "ekdqw", "pdpw", 1, 15000);
    man.print();
    student.print();
    teacher.print();
    return 0;
}
