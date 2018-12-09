#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

class fullStack{};
class emptyStack{};

template <class Itemtype>
class Stacktype{
    struct Nodetype{
        Itemtype data;
        Nodetype* next;
    };

    private:
        Nodetype *topPtr;
    public:
    Stacktype();
    ~Stacktype();
    bool isFull();
    bool isEmpty();
    void makeEmpty();
    void Push(Itemtype);
    void Pop();
    Itemtype Top();


};


#endif // STACKTYPE_H_INCLUDED
