#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    string surname;
    string second_name;
    bool gender;
public:
    human()
    {
        cout<<"Constructor H1 ";
        name="";
        surname="";
        second_name="";
        gender=true;
    }
    human(string name, string surname, string second_name, bool gender)
    {
        cout<<"Constructor H2 ";
        this->name = name;
        this->second_name = second_name;
        this->surname = surname;
        this->gender = gender;
    }
    human(const human& other)
    {
        cout<<"Constructor H3 ";
        name = other.name;
        second_name = other.second_name;
        surname = other.surname;
        gender = other.gender;
    }
    virtual void print()
    {
        cout<<"Human: "<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<"\n\n";
    }
};

class student : virtual public human
{
protected:
    int studentID;
public:
    student():human()
    {
        cout<<"Constructor S1 ";
        studentID=-1;
    }
    student(string name, string surname, string second_name,
            bool gender, int studentID):human(name, surname, second_name, gender)
    {
        cout<<"Constructor S2 ";
        this->studentID = studentID;
    }
    student(const student &other):human(other.name, other.surname, other.second_name, other.gender)
    {
        cout<<"Constructor S3 ";
        studentID = other.studentID;
    }
    void print()
    {
        cout<<"Student: "<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<studentID<<"\n\n";
    }
};

class teacher: virtual protected human
{
protected:
    double payment;
public:
    teacher():human()
    {
        cout<<"Constructor T1 ";
        payment = 0;
    }

    teacher(string name, string surname, string second_name,
            bool gender, double payment):human(name, surname, second_name, gender)
    {
        cout<<"Constructor T2 ";
        this->payment = payment;
    }
    virtual void print()
    {
        cout<<"Teacher: "<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<payment<<"\n\n";
    }
};

class professor: public teacher
{
    bool degree;
public:
    professor():teacher()
    {
        cout<<"Constructor P1 ";
        degree = true;
    }
    professor(string name, string surname, string second_name,
              bool gender, double payment, bool degree): human(name, surname, second_name, gender),
                                                         teacher(name, surname, second_name, gender, payment)
    {
        cout<<"Constructor P2 ";
        this->degree = degree;
    }
    void print()
    {
        cout<<"Professor: "<<name<<" "<<second_name<<" "<<surname<<" "<<gender<<" "<<payment<<" "<<degree<<"\n\n";
    }
};

class PhDstudent: public student, public teacher
{
    int course;
public:
    PhDstudent():student(),teacher()
    {
        cout<<"Constructor PhD1 ";
        course = 1;
    }
    PhDstudent(string name, string surname, string second_name,
               bool gender, double payment, int course, int studentID)
    {
        cout<<"Constructor PhD2 ";
        this->name = name;
        this->surname = surname;
        this->second_name = second_name;
        this->gender = gender;
        this->payment = payment;
        this->course = course;
        this->studentID = studentID;
    }
    void print()
    {
        cout<<"PhDstudent "<<name<<" "<<second_name<<" "<<surname<<" "<<gender
            <<" "<<payment<<" "<<studentID<<" "<<course<<"\n\n";
    }
};

#endif // PEOPLE_H
