#include <iostream>
#include <string>
#include <queue>

struct Node
{
	const int Value;
	Node *Left = nullptr, *Right = nullptr;
	Node(const int val) : Value(val) {}
	~Node()
	{
		delete Left;
		delete Right;
	}
};

bool Remove(Node *&node, const int n)
{
	
}

void Show(Node *node)
{
	if (node == nullptr)
	{
		return;
	}
	std::cout << node->Value << std::endl;
	std::queue<Node*> queue;
	while (true)
	{

	}
}

void Append(Node *&node, const int n)
{
	if (node == nullptr)
	{
		node = new Node(n);
		return;
	}
	if (node->Value == n)
	{
		return;
	}
	Append((n > node->Value) ? node->Right : node->Left, n);
}


bool Contains(const Node *const node, const int n)
{
	if (node == nullptr)
	{
		return false;
	}
	if (node->Value == n)
	{
		return true;
	}
	return Contains((n > node->Value) ? node->Right : node->Left, n);
}

class Three
{
private:
	Node *Root = nullptr;

public:
	void Append(const int n)
	{
		::Append(Root, n);
	}

	bool Contains(const int n)
	{
		return ::Contains(Root, n);
	}

	~Three()
	{
		delete Root;
	}
};

int main()
{
	Three test;
	int number;
	std::string command;
	while (std::cout<<">>> ")
	{
		std::cin >> command;
		if (command == "find")
		{
			std::cin >> number;
			std::cout << test.Contains(number) << std::endl;
			continue;
		}
		if (command == "append")
		{
			std::cin >> number;
			test.Append(number);
			std::cout << number<< " was append" << std::endl;
			continue;
		}
		if (command == "help")
		{
			std::cout << "append [number] - append number to three\nfind [number] - find number in three\nremove [number] - remove number from three\nshow - show three\nhelp - help" << std::endl;
			continue;
		}
	}
}

