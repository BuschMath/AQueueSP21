typedef int ItemType;
const int defaultMax = 100;

class AQueue
{
public:
	AQueue(int max);  
	AQueue();        
	~AQueue();
	void MakeEmpty();
	bool IsEmpty() const;
	bool IsFull() const;
	void Enqueue(ItemType item);
	void Dequeue(ItemType& item);
private:
	ItemType* items;
	int maxItems;
	int front;
	int rear;

};
