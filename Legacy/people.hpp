//
//  people.hpp
//  Legacy
//
//  Created by David Nurdinov on 18/04/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#ifndef people_hpp
#define people_hpp
#include <string>
#include <iostream>
using namespace std;
class human{
protected:
    string name;
    string surname;
    string second_name;
    bool gender;
public:
    human(){
        name="";
        surname="";
        second_name="";
        gender=true;
    }
    human(string name,string surname, string second_name, bool gender){
        this->name=name;
        this->second_name=second_name;
        this->surname=surname;
        this->gender=gender;
    }
    human(const human& other){
        name=other.name;
        second_name=other.second_name;
        surname=other.surname;
        gender=other.gender;
    }
    void print(){
        cout<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<endl;
    }
    
    
    
};



class student:public human{
    int studentID;
public:
    student():human(){
        studentID=-1;
    }
    student(string name,string surname, string second_name, bool gender, int studentID):human(name, surname, second_name, gender){
        this->studentID=studentID;
    }
    student(const student& other){
        name=other.name;
        surname=other.surname;
        second_name=other.second_name;
        gender=other.gender;
        
    }
    void print(){
        cout<<"student"<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<studentID<<endl;
    }
    
    };


class teacher:public human{
protected:
    double payment;
public:
    teacher():human(){
        payment=0;
    }
    teacher(string name,string surname, string second_name, bool gender, double payment):human(name, surname, second_name, gender){
        this->payment=payment;
    }
    void print(){
        cout<<"teacher"<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<payment<<endl;
    }
};
class professor:public teacher{
    bool degree;
public:
    professor():teacher(){
        degree=true;
    }
    professor(string name,string surname, string second_name, bool gender, double payment, bool degree):teacher(name, surname, second_name, gender, payment){
        this->degree=degree;
    }
    void print(){
        cout<<"Professor"<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<payment<<" "<<degree<<endl;
    }
};


#endif /* people_hpp */
