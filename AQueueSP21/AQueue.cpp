#include "AQueue.h"

AQueue::AQueue(int max)
{
	maxItems = max;

	items = new ItemType[maxItems];
	front = 0;
	rear = maxItems;
}

AQueue::AQueue()
{
	maxItems = defaultMax;

	items = new ItemType[maxItems];
	front = 0;
	rear = maxItems;
}

AQueue::~AQueue()
{
	delete items;
}

void AQueue::MakeEmpty()
{
	front = 0;
	rear = maxItems;
}

bool AQueue::IsEmpty() const
{
	return front == rear;
}

bool AQueue::IsFull() const
{
	return rear == front;
}

void AQueue::Enqueue(ItemType item)
{
	if (!IsFull())
	{
		rear++;
		items[rear - 1] = item;
	}
}

void AQueue::Dequeue(ItemType& item)
{
	if (!IsEmpty())
	{
		item = items[front];

		front++;

		if (front >= maxItems)
			front = 0;
	}
}
