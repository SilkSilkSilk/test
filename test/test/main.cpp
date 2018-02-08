#include <iostream>
#include <vector>

#include "18.2.8.h"

using namespace std;

template<typename T>			//模板类的别名方法
using aa = class_18_2_8<T>;

int main()
{
	class_18_2_8<int> p();

	class_18_2_8<int>::Stack ptr(new class_18_2_8<int>::SNode());
	ptr->Data = 0;

	aa<int> a;


	return 0;
}