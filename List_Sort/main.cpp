#include <stdio.h>
#include <string.h>
struct anketa
{
    char name [40];
    char surname[40];
    char gender[1];
    int ID;
    anketa* next;
};
typedef anketa *Panketa;
Panketa Createanketa (char newName[], char newSurname[], char newGender[], int newID)
{
    
    Panketa newanketa=new anketa;
    strcpy(newanketa -> name, newName);
    strcpy(newanketa -> surname, newSurname);
    strcpy(newanketa -> gender, newGender);
    newanketa -> ID = newID;
    newanketa -> next = NULL;
    return newanketa;
}
void Addfirst (Panketa &Head, Panketa anketa)
{
    anketa -> next=Head;
    Head = anketa;
}

void AddAfter (Panketa p, Panketa anketa) {
    anketa -> next= p->next;
    p -> next = anketa;
}

void AddBefore(Panketa &Head, Panketa p, Panketa anketa)
{
    Panketa q = Head;
    if (Head == p) {
        Addfirst(Head, anketa);
        return;
    }
    while (q && q->next!=p)
        q = q->next;
    if ( q )
        anketa -> next= p->next;
    p -> next = anketa;
}
void AddLast(Panketa &Head, Panketa anketa)
{
    Panketa q = Head;
    if (Head == NULL) {
        Addfirst(Head, anketa);
        return;
    }
    while (q->next) q = q->next;
    AddAfter(q, anketa);
}
void PrintList (Panketa Head){
    while (Head) {printf ("%s %s %s %d\n", Head -> name, Head -> surname, Head -> gender, Head -> ID); Head=Head->next;};
}

/*PNode Find (PNode Head, char NewWord[])
 {
 PNode q = Head;
 while (q && strcmp(q->word, NewWord))
 q = q->next;
 return q;
 }*/
void DeleteFirst (Panketa &Head)
{
    if (Head)
        Head = Head -> next;
}
void Deleteanketa(Panketa &Head, Panketa Oldanketa)
{
    Panketa q = Head;
    if (Head == Oldanketa)
        Head = Oldanketa->next;
    else {
        while (q && q->next != Oldanketa)
            q = q->next;
        if ( q == NULL ) return;
        q->next = Oldanketa->next;
    }
    delete Oldanketa;
}
void PrintByID(Panketa Head){
    int k=0;
    Panketa q=Head;
    while (q){
        k++;
        q=q->next;
    }
    q=Head;
    int printed=0;
    int prevmin =0;
    while (printed !=k)
    {
        int min = q -> ID;
        Panketa r = Head;
        Panketa minanketa;
        while (r)
        {
            if (r->ID<min && r->ID > prevmin)
            {
                min= r->ID;
                minanketa = r;
            }
            r = r->next;
        }
        printf ("%s %s %s %d \n", minanketa -> name, minanketa->surname, minanketa ->gender, minanketa -> ID);
        
        prevmin = min;
        printed++;
    }
}
void SortedInsert( Panketa &head, Panketa node )
{
    if ( !head || node->ID < head->ID )
    {
        node->next = head;
        head = node;
    }
    else
    {
        Panketa current = head;
        while ( current->next && !( node->ID < current->next->ID ) )
        {
            current = current->next;
        }
        
        node->next = current->next;
        current->next = node;
    }
}

Panketa InsertionSort( Panketa &head )
{
    Panketa result = nullptr;
    
    while ( head )
    {
        Panketa node = head;
        head = head->next;
        SortedInsert( result, node );
    }
    
    return result;
}
int main (void)
{
    Panketa Head=NULL;
    Panketa first = Createanketa ("first", "wii2", "f", 10321727345);
    Panketa second = Createanketa ("second", "wuwiq", "f", 1032172838);
    Panketa third = Createanketa ("third", "wokooq", "f", 1032172845);
    Panketa fourth = Createanketa ("fourth", "Sah", "f", 1032172724);
    
    Addfirst (Head, second);
    AddLast (Head, first);
  //  AddBefore (Head, first, third);
    AddLast (Head, fourth);
//   AddAfter(third, first);

    PrintList (Head);
    printf ("\n");
   //PrintByID(Head);
  Panketa kek=InsertionSort(Head);
    
    PrintList (kek);
    
    
    return 0;
}


