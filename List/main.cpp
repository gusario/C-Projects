//
//  main.cpp
//  efef
//
//  Created by David Nurdinov on 14/02/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include <string.h>
struct Node{
    char Word [40];
    int count;
    Node *next;
    
};
typedef Node *Pnode;

Pnode CreateNode(char newWord[], int newCount){
    Pnode newNode= new Node;
    strcpy(newNode->Word, newWord );
    newNode->count=newCount;
    newNode->next=NULL;
    return newNode;
}


typedef Node *Pnode;
void AddFirst(Pnode &head, Pnode newNode){
    newNode->next=head;
    head=newNode;
}


void PrintList(Pnode head){
    while(head){
        printf("%s ", head->Word);
        head=head->next;
    }
}


void AddAfter(Pnode p,Pnode Node){
    Node->next=p->next;
    p->next=Node;
}


void AddBefore(Pnode &Head, Pnode p, Pnode Node){
    Pnode q = Head;
    if (Head==p){
        AddFirst(Head, Node);
        return;
    }
    while(q && q->next!=p){
        q = q->next;
    }
    if (q){
        AddAfter(q, Node);
    }
}
void AddLast(Pnode &Head,Pnode Node){
    Pnode q=Head;
    if(Head==NULL){
        AddFirst(Head, Node);
        return;
    }
    while (q->next) q = q->next;
    AddAfter(q, Node);
}


void DeleteNode(Pnode Head, Pnode p){
    if(!Head)
        return;
    if (Head==p)
        Head=Head->next;
    else{
        Pnode q=Head;
        while (q && q->next !=p)
            q=q->next;
            if (q)
                q->next=p->next;
        }
    delete p;
}



int main() {
    Pnode head=NULL;
    Pnode newNode=CreateNode("text", 1);
    Pnode nnewNode=CreateNode("something", 2);
    Pnode asas=CreateNode("SOME", 3);
    Pnode led=CreateNode("HEn", 4);
    Pnode zet=CreateNode("LastWord", 5);
    AddFirst(head, newNode);
    AddFirst(head, nnewNode);
    AddAfter(head, asas);
    AddBefore(head, newNode, led);
    AddLast(head, zet);
    PrintList(head);
    printf("\n");
    DeleteNode(head, asas);
    PrintList(head);
    printf("\n");
    
    
    
    return 0;
}
