#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;


int main()
{
    system("color f3");

    clsMyQueueArr <int> MyQueueArr;

    MyQueueArr.Push(10);
    MyQueueArr.Push(20);
    MyQueueArr.Push(30);
    MyQueueArr.Push(40); 
    MyQueueArr.Push(50);


    cout << "\nQueue: \n";
    MyQueueArr.Print();

    cout << "\nQueue Size: " << MyQueueArr.Size();
    cout << "\nQueue Front: " << MyQueueArr.Front();
    cout << "\nQueue Back: " << MyQueueArr.Back();


    MyQueueArr.Pop();
    cout << "\n\nQueue After Pop() : \n";
    MyQueueArr.Print();


    //Extension #1
    cout << "\n\nItem(2) : " << MyQueueArr.GetItem(2);

    //Extension #2
    MyQueueArr.Reverse();
    cout << "\n\nQueue after Reverse() : \n";
    MyQueueArr.Print(); 

    //Extension #3
    MyQueueArr.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueueArr.Print();

    //Extension #4
    MyQueueArr.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueueArr.Print();


    //Extension #5
    MyQueueArr.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at Front: \n";
    MyQueueArr.Print();

    //Extension #6
    MyQueueArr.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at Back: \n";
    MyQueueArr.Print(); 

    //Extension #7
    MyQueueArr.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueueArr.Print();


    system("pause>0");
    return 0;
}