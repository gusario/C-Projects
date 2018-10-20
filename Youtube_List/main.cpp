//
//  main.cpp
//  Youtube_List
//
//  Created by David Nurdinov on 23/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
template<typename T>
class List{
public:
    List();
    ~List();
    void push_back(T data);
private:
    template<typename U>
    class Node{
    public:
        Node *pNext;
        T data;
        Node(T data=T(),Node *pNext=nullptr){
            this->data=data;
            this->pNext=pNext;
        }
    };
    int Size;
    Node<T> *head;
    
};
template<typename T>
List<T>::List(){
    head=nullptr;
    Size=0;
}
template<typename T>
List<T>::~List<T>(){
    
}
template<typename T>
void List<T>::push_back(T data){
    if(head==nullptr){
        head=new Node<T>(data);
    }
    else{
        Node<T> *current=this->head;
        while (current->pNext!=nullptr) {
            current=current->pNext;
        }
        current->pNext=new Node<T>(data);
        
    }
}

int main(int argc, const char * argv[]) {
    List<int> lst;
    lst.push_back(5);
    lst.push_back(10);
    
    
    return 0;
}
