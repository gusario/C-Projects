//
//  main.cpp
//  List_Sort_ver2.0
//
//  Created by David Nurdinov on 07/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
struct student
{
    char name [40];
    char surname[40];
    char gender[1];
    long ID;
    student* next;
};
typedef student *Pstudent;
void PrintList (Pstudent Head){
    while (Head) {printf ("%s %s %s %ld\n", Head -> name, Head -> surname, Head -> gender, Head -> ID); Head=Head->next;};
    
}
void Addfirst (Pstudent &Head, Pstudent anketa)
{
    anketa -> next=Head;
    Head = anketa;
}

void AddAfter (Pstudent p, Pstudent anketa) {
    anketa -> next= p->next;
    p -> next = anketa;
}
void AddLast(Pstudent &Head, Pstudent anketa)
{
    Pstudent q = Head;
    if (Head == NULL) {
        Addfirst(Head, anketa);
        return;
    }
    while (q->next) q = q->next;
    AddAfter(q, anketa);
}

int main(int argc, const char * argv[]) {
    Pstudent Head=NULL;
    FILE* pf = fopen("/Users/david/Desktop/List_Sort_ver2.0/List_Sort_ver2.0/File.strings", "r");
    
    while(!feof(pf)){
        student n;
     fscanf(pf,"%s %s %c %ld\n", n.name, n.surname, n.gender, &n.ID);
        printf("%s %s %s %ld\n", n.name, n.surname, n.gender, &n.ID);
        
    }
    PrintList(Head);
    return 0;
}
