#include "matrix.h"
#include <cmath>
cMatrix::cMatrix()      //Автоматическое создание матрицы 5 на 5
{
    width = 5;
    height = 5;
    values = new double*[height];
    for(int i = 0; i < height; i++)
    values[i] = new double[width];
    for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++)
    values[i][j] = i*width + j;
}

cMatrix::cMatrix(int h, int w) // Автоматическое создание матрицы с заданным кол-вом строк и столбцов
{
    width = w;
    height = h;
    values = new double*[height];
    for(int i = 0; i < height; i++)
        values[i] = new double[width];
    for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++) cin>>values[i][j];
           // values[i][j] = i*width + j;
}

cMatrix::cMatrix(const cMatrix &other) //Копирование матрицы новой переменной
{
    width = other.width;
    height = other.height;

    for(int i = 0; i < height; i++)
        values[i] = new double[width];
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            values[i][j] = i*width + j;
}

cMatrix::~cMatrix()// Деструктор, удаляет всю матрицу
{
    for(int i = 0; i < height; i++)
        delete []values[i];
    delete []values;
    cout << "Матрица удалена!" << endl;
}

void cMatrix::print(){// печать всей матрицы
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(values[i][j]>99)
                cout<<values[i][j]<<" ";
            else if((values[i][j]>9) && (values[i][j]<=99))
                cout<<values[i][j]<<"  ";
            else if(values[i][j]<=9)
                cout<<values[i][j]<<"   ";
            }
        cout<<endl;
    }
}

cMatrix cMatrix::operator +(const cMatrix& other) //  сложение матриц!
{
    if(width != other.width || height != other.height)
    {
        cout<<"Error! Sizes are different!\n";
        exit(1);
    }
    cMatrix tmp(height, width);
    for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++)
    tmp.values[i][j] = values[i][j] + other.values[i][j];
    return tmp;
}
    bool cMatrix::operator ==(const cMatrix& other){
        bool check=true;
        for(int i = 0; i < height; i++)
            for(int j = 0; j < width; j++)
                if (values[i][j]!=other.values[i][j]) check=false;
        
        return check;
    }


cMatrix cMatrix::operator *(const cMatrix& other) {     //Умножение матриц
    if(width != other.height )
    {
        cout<<"Error! Sizes are different!\n";
        exit(1);
    }
   cMatrix tmp(height, other.width);
    //должно проходить по всей ширине первого и по всей высоте второго
    for(int i = 0; i < height; i++){
        for(int j = 0; j < other.width; j++){
           int z=0;
            tmp.values[i][j]=0;
            while(z<height){
                tmp.values[i][j] += values[i][z] * other.values[z][j];
                z++;
            }
        }
    }
    
    return tmp;
}

void cMatrix::operator *=(const cMatrix& other){//A*=B
    if(width != other.height )
    {
        cout<<"Error! Sizes are different!\n";
        exit(1);
    }
    width=other.width;
    
    cMatrix tmp(height, other.width);
    //должно проходить по всей ширине первого и по всей высоте второго
    for(int i = 0; i < height; i++){
        for(int j = 0; j < other.width; j++){
            int z=0;
            tmp.values[i][j]=0;
            while(z<height){
                tmp.values[i][j] += values[i][z] * other.values[z][j];
                z++;
            }
        }
    }
    
   for(int i = 0; i < tmp.height; i++)
        for(int j = 0; j < tmp.width; j++)
            values[i][j] = tmp.values[i][j];
    
    
    
}



void cMatrix::operator *=(double k)//Умножение матрицы на число
{
    for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++)
    values[i][j] = values[i][j]*k;
}

cMatrix cMatrix::operator *(double k)//присваивание матрицы к другой, умноженной на число
{
    cMatrix tmp(height, width);
    for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++)
    tmp.values[i][j] = values[i][j]*k;
    return tmp;
}

void cMatrix::operator =(const cMatrix& other)//Присваивание одной матрицы к другой
{
    //TODO: DONE
    
    for(int i = 0; i < other.height; i++)
            delete []values[i];
    delete []values;
    
    
    height=other.height;
   width=other.width;
    values = new double*[height];
    for(int i = 0; i < height; i++)
        values[i] = new double[width];
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            values[i][j] = other.values[i][j];
}

ostream &operator<<(ostream& out, const cMatrix& matrix){//дружественная функция вывода матрицы
    for(int i = 0; i < matrix.height; i++)
    {
        for(int j = 0; j < matrix.width; j++)
        if(matrix.values[i][j]>99)
            cout<<matrix.values[i][j]<<" ";
        else if((matrix.values[i][j]>9) && (matrix.values[i][j]<=99))
            cout<<matrix.values[i][j]<<"  ";
        else if(matrix.values[i][j]<=9)
            cout<<matrix.values[i][j]<<"   ";
        cout<<endl;
    }
    return out;
}

double cMatrix::getElement(int h, int w)//Метод получения нужного элемента матрицы
{
    if(h >= 0 && w >= 0 && h < height && w < width)
    return values[h][w];
    else
    {
        cout<<"Error! Out of range!\n";
        return -1;
    }
}
void cMatrix::setElement(int h, int w, double value){
    if(h >= 0 && w >= 0 && h < height && w < width)
        values[h][w]=value;
    }

cMatrix cMatrix::transpose(){  //транспонирование матрицы
    cMatrix tmp(width, height);
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++){
            tmp.values[i][j] = values[j][i];
            
        }
    }
   
    return tmp;
}

double cMatrix::getChet(){
    double sum=0;
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            if(int(values[i][j])%2==0) sum+=values[i][j];
    return sum;
}

double cMatrix::determinant(){
    double swap, mul, det;
    int point, t;
    if(width!=height){
        cout<<"Error! Size not compare!\n";
        return 0;
    }
    point=0;
    for(int i=0;i<width-1;i++){
        t=1;
        while (values[i][i]==0) {
            for(int j=0;j<width;j++){
                swap=values[i][j];
                values[i][j]=values[i+t][j];
                values[i+t][j]=swap;
                
            }
            
            t++;
            point++;
        }
       
        for (int k=i+1; k<width; k++) {
            mul=values[k][i]/values[i][i];
            for (int j=0; j<width; j++)
                values[k][j]-=values[i][j]*mul;
            
            }
        }
    det=pow(-1,point);
    for (int i=0; i<width; i++) {
        det*=values[i][i];
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout<<values[i][j]<<" ";
            
        }
        cout<<endl;
        
    }
    return det;
}



