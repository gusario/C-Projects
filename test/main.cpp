//
//  main.cpp
//  tech_prog_kr
//
//  Created by David Nurdinov on 23/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
using namespace std;
class Array{
private:
    int *mass;
    int size;
public:
    Array(){
        cout<<"CONSTRUCT_1"<<endl;
        cout<<"It's empty now :("<<endl;
        size=5;
        int *mass=new int[size];
        for(int i=0;i<size;i++){
            mass[i]=i;
           // cout<<mass[i]<<" ";
        }
        
        
    }
    
    Array(int mass_size){
        size=mass_size;
        int *mass=new int[size];
        for(int i=0;i<size;i++)
            mass[i]=0;
    }
    ~Array(){
        cout<<"Массив удален!"<<endl;
        for(int i=0;i<size;i++){
            delete [] mass;
        }
    }
   
    void setElem(int index, int value){
        if((index>=0) &&(index<size)) cin>>mass[index];
        else cout<<"Vvedi index normalno,pls";
    }
    int getElem(int index){
        if((index>=0) &&(index<size)) return mass[index];
        else{
            cout<<"Vvedi index normalno,pls";
            return -1;
            
        }
    }
    void show(){
        for(int i = 0; i < size; i++){
            cout<<mass[i]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
};
int main() {
    // insert code here...
   
   // cin>>N;
    Array mas;
    mas.show();
    
  //  Array mass(N);
    //for(int i=0;i<N;i++){
    //    cin>>x;
    //    mass.setElem(i,x);
    // }
   // mas.print();
    return 0;
}
