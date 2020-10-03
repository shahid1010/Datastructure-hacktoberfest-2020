#include<iostream>
using namespace std;
int main()
{
    struct node{
    int data;
    node *next;

    };

    node *nptr,*tptr,*list,*pptr;

    int item;
    list = NULL;
    for(int i=1;i<10;i++)
    {
        //cin>> item;
        nptr = new(node);
        nptr->data = i;
        nptr->next = NULL;

        if(list == NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr =  nptr;
        }
    }

    int Del;
    cout<< "What to delete??"<<endl;
    cin>> Del;
    tptr = list;
     while(tptr->data =!Del)  /// Do until locate the target node;
         {

             tptr = tptr;       /// Node remains the same node until not found;
             tptr = tptr->next; /// Proceed one next ;


             if(tptr== NULL)
             {
                 break;
             }

         }
          ///Target node found;

            pptr->next = tptr->next;  /// Point the next node of target node;
            delete(tptr);            /// delete the terget node;


 ///  Is not working now :-(;

    tptr = list;
    for(int i=1;i<10;i++)
    {
        cout<< tptr->data<<endl;
        tptr = tptr->next;
    }
}
