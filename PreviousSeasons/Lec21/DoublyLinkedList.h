class DLIntNode {
public:
    DLIntNode ( ){}
    DLIntNode (int theData, DLIntNode* previous, DLIntNode* next)
                        : data(theData), nextLink(next), previousLink(previous) {}
    DLIntNode* getNextLink( ) const { return nextLink; }
    DLIntNode* getPreviousLink( ) const { return previousLink; }
    int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setNextLink(DLIntNode* pointer){ nextLink = pointer; }
    void setPreviousLink(DLIntNode* pointer) { previousLink = pointer; }
private:
    int data;
    DLIntNode *nextLink;
    DLIntNode *previousLink;
};

typedef DLIntNode* DLIntNodePtr; //optional
