/*  C++ program to implement Simple Queue using Class */

#include <iostream>

using namespace std;

class queue
{
        private :

                int *arr ;
                int front, rear ;
                int MAX ;
        public :
                queue( int maxsize = 10 ) ;
                void addq ( int item ) ;
                int delq( ) ;
} ;

queue :: queue( int maxsize )
{
        MAX = maxsize ;
        arr = new int [ MAX ];
        front = -1 ;
        rear = -1 ;
}

void queue :: addq ( int item )
{
        if ( rear == MAX - 1 )
        {
                cout << "\nQueue is full" ;
                return ;
        }
        rear++ ;
        arr[rear] = item ;
        if ( front == -1 )
                front = 0 ;
}
int queue :: delq( )
{
        int data ;

        if ( front == -1 )
        {
                cout << "\nQueue is Empty" ;
                return NULL ;
        }

        data = arr[front] ;
        arr[front] = 0 ;
        if ( front == rear )
                front = rear = -1 ;
        else
                front++ ;

        return  data ;
}
int main( )
{
        queue a (10 ) ;

        a.addq ( 23 ) ;
        a.addq ( 9 ) ;
        a.addq ( 11 ) ;
        a.addq ( -10 ) ;
        a.addq ( 25 ) ;
        a.addq ( 16 ) ;
        a.addq ( 17 ) ;
        a.addq ( 22 ) ;
        a.addq ( 19 ) ;
        a.addq ( 30 ) ;
        a.addq ( 32 ) ;
        int i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;
        i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;
        i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;

        cout<<"\n";

        return 0;
}
