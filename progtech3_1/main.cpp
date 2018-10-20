#include <iostream>
#include <string>

using namespace std;

class plant
{
public:
    string name;
    plant()
    {
        cout << "Plant grown" << endl;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    plant(string name)
    {
        this->name=name;
        cout << "Plant grown" << endl<< "Name of the plant is "<<name<<endl;
    }
    virtual void print() = 0;
    virtual ~plant()
    {
        cout << "Plant destroyed" <<endl;
    }
};

class tree : public plant
{
public:
    int height;
    int leafsize;
    void set_height(int height)
    {
        this->height=height;
    }
    void set_leafsize(int leafsize)
    {
        this->leafsize=leafsize;
    }
    void print()
    {
        cout<<"Name of the tree is "<<name<<endl<<"Size of the leaf is "<<leafsize<<endl<<"Height of the tree is "<<height<<endl;
    }
    tree()
    {
        cout << "Tree grown" << endl;
    }
    
    tree(string name, int leafsize, int height)
    {
        this->name=name;
        this->leafsize=leafsize;
        this->height=height;
        cout << "Tree grown"<<endl;
    }
    ~tree()
    {
        cout << "Tree destroyed" << endl;
    }
    void grow()
    {
        this->height+=10;
        cout << "Tree has grown, height of the tree is "<<height<<endl;
    }
};

class flower : public plant
{
public:
    string color;
    void set_color(string color)
    {
        this->color=color;
    }
    void print()
    {
        cout <<"Name of the flower is "<< name <<endl<<"Color of the flower is "<<color<<endl;
    }
    flower()
    {
        cout << "Flower grown" << endl;
    }
    flower (string name, string color){
        this->name=name;
        this->color=color;
        cout << "Flower grown"<<endl;
    }
    ~flower()
    {
        cout << "Flower destroyed" << endl;
    }
    void blossom()
    {
        cout<<"Flower blossomed"<<endl<<endl<<"__________@@@____@@@\n________@@@________@@_____@@@@@@@\n________@@___________@@__@@@______@@\n________@@____________@@@__________@@\n__________@@________________________@@\n____@@@@@@______@@@@@___________@@\n__@@@@@@@@@__@@@@@@@_________@@\n__@@____________@@@@@@@@@_______@@\n_@@____________@@@@@@@@@@_____@@\n_@@____________@@@@@@@@@___@@@\n_@@@___________@@@@@@@______@@\n__@@@@__________@@@@@________@@\n____@@@@@@_______________________@@\n_________@@_________________________@@\n________@@___________@@___________@@\n________@@@________@@@@@@@@@@@\n_________@@@_____@@@_@@@@@@@\n__________@@@@@@@\n___________@@@@@_@\n";
        cout <<endl;
    };
};

class bush : public tree
{
public:
    char blossoms;
    void set_blossoms(char blossoms)
    {
        this->blossoms=blossoms;
    }
    void print()
    {
        cout<<"Name of the bush is "<< name <<endl<<"Height of the bush is " << height <<endl<<"Has flowers "<<blossoms<<endl;
    }
    bush()
    {
        cout << "Bush grown" << endl;
    }
    bush (string name, int leafsize, int height, char blossoms){
        this->name=name;
        this->height=height;
        this->blossoms=blossoms;
        this->leafsize=leafsize;
        cout<<"Bush grown"<<endl;
    }
    ~bush()
    {
        cout << "Bush destroyed" <<endl;
    }
};

int main()
{
    tree oak("oak",10, 200);
    oak.set_height(500);
    oak.print();
    oak.grow();
    cout<<endl;
    
    flower tulip ("tulip","red");
    cout<<endl;
    tulip.blossom();
    cout<<endl;
    tulip.print();
    cout<<endl;
    
    bush rose("rose",2,125,'y');
    rose.print();
    cout<<endl;
    
    flower daisy("not daisy", "violet");
    daisy.set_color("yellow");
    daisy.set_name("daisy");
    daisy.print();
    cout <<endl;
}
