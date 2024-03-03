class IntNode {
public:
	IntNode() { }
	IntNode( int theData, IntNode* theLink )
		          : data(theData), link(theLink) { }
	IntNode* getLink() 	const { return link; }
	int getData() 		const { return data; }
	void setData(int theData) { data = theData; }
	void setLink(IntNode* pointer) 	{ link=pointer; }
private:
	int data;
	IntNode *link; //next
};

typedef IntNode* IntNodePtr;
