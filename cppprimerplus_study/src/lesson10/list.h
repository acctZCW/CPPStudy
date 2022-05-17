
template <typename T>
class Node
{
private:
    T *data;

public:
    Node *next;
    Node()
    {
        data = new T();
    }
    ~Node()
    {
        delete data;
    }
    void setData(T d)
    {
        *data = d;
    }
    T getData() const
    {
        return *data;
    }
};

template <typename T>
class List
{
private:
    Node<T> *head;

public:
    List();
    ~List();
    int is_empty();
};

