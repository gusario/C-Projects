//
//  main.cpp
//  tech_prog_kr
//
//  Created by David Nurdinov on 23/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.

#include <iostream>
#include <math.h>
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
        mass=new int[size];
        for(int i=0;i<size;i++)
            mass[i]=i;
        
    }
    
    Array(int mass_size){
        size=mass_size;
        mass=new int[mass_size];
        for(int i=0;i<mass_size;i++)
            mass[i]=0;
        }
    ~Array(){
        cout<<"it's work"<<endl;
        delete []mass;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<mass[i]<<" ";
        }
        cout<<endl;
    }
    void setElem(int index, int value){
        if((index>=0) &&(index<size)) mass[index]=value;
        else cout<<"Vvedi index normalno,pls";
    }
    int getElem(int index){
        if((index>=0) &&(index<size)) return mass[index];
        else{
            cout<<"Vvedi index normalno,pls";
            return -1;
            
        }
    }
    void sortup(){
        
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (mass[j] > mass[j + 1]) {
                    // меняем элементы местами
                   int temp = mass[j];
                    mass[j] = mass[j + 1];
                    mass[j + 1] = temp;
                }
            }
        }
    }
    void sortdown(){
        for (int i = size - 1; i >= 0; i--){
            for (int j = 0; j < i; j++){
                if (mass[j] < mass[j + 1]){
                    int tmp = mass[j];
                    mass[j] = mass[j + 1];
                    mass[j + 1] = tmp;
                }
            }
        }
    }
    
    
    
    
};
int main(int argc, const char * argv[]) {
    // insert code here..
    //Array mas;
    //mas.print();
    int N;
    cin>>N;
    int x, Sum = 0;
    Array mass(N);
    for(int i=0;i<N;i++){
        cin>>x;
       mass.setElem(i,x);
        for (int j=1;j<=sqrt(mass.getElem(i));j++){
            if(mass.getElem(i)%j==0) Sum++;
            if (Sum>1){
                
                break;
                
            }
            
        }
        if( Sum==1){ cout<<"-простое число"<<endl; Sum=0;}
      //  if ((mass.getElem(i)%2==0) && (mass.getElem(i)!=0)) Sum+=1;
    }
    cout<<"SUM="<<Sum<<endl;
  //  mass.sortup();
    mass.print();
    mass.sortdown();
    mass.print();
    
    return 0;
}
