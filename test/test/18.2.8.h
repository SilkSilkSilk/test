#ifndef __MAIN_18_2_8_H__
#define __MAIN_18_2_8_H__

#include <iostream>
#include <vector>
#include <memory>

using namespace std;


template <typename T> class class_18_2_8
{			//没有找到代码不补全的原因
public:
	struct SNode;

	using Stack =  shared_ptr<SNode>;

	struct SNode
	{
		T Data;
		Stack Next;
	};
	
	Stack Snode_ptr; //链表的头

	class_18_2_8<T>()
	{
		Snode_ptr = make_shared<SNode>();
		Snode_ptr->Data = 0;
	}
	~class_18_2_8<T>()
	{

	}

	void test(T a)
	{
		
	}
};





#endif
