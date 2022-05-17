#include "list.h"

template <typename T>
List<T>::List()
{
    head = new Node();
}


template <typename T>
List<T>::~List()
{
    Node *p = head;
    while(head)
    {
        p = head;
        head = head->next;
        delete p;
    }
}

template <typename T>
int List<T>::is_empty()
{
    if()
}