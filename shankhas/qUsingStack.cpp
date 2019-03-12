#include <iostream>
#include <stack>

using namespace std;

struct queue
{
	stack<int> s1;

	int top;

	void enqueue(int data)
	{
		s1.push(data);
	}

	int dequeue()
	{
		if(s1.empty())
		{
			printf("Empty queue\n");
			return 0;
		}

		int top = s1.top();
		s1.pop();

		if(s1.empty())
		{
			return top;
		}

		int item = dequeue();
		s1.push(top);
		return item;

	}
};


int main(int argc, char const *argv[])
{
	queue q;
	q.enqueue(5);
	q.enqueue(9);
	q.enqueue(3);
	q.enqueue(4);
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	return 0;
}