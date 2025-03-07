#pragma once
#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr
{

protected:
	clsDynamicArray <T> _MyArr;

public:

	void Push(T Item) {

		_MyArr.InsertAtEnd(Item);
	}

	void Pop() {

		_MyArr.DeleteFirstItem();
	}

	void Print() {

		_MyArr.PrintList();
	}

	int Size() {

		return _MyArr.Size();
	}

	bool IsEmpty() {

		return _MyArr.IsEmpty();
	}

	T Front() {

		return _MyArr.GetItem(0);
	}

	T Back() {

		return _MyArr.GetItem(Size() - 1);
	}



	T GetItem(int Index) {

		return _MyArr.GetItem(Index);
	}


	void Reverse() {

		_MyArr.Reverse();
	}

	void UpdateItem(int Index, T New_Value) {

		_MyArr.SetItem(Index, New_Value); 
	}

	void InsertAfter(int Index, T Value) {

		_MyArr.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value) {

		_MyArr.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value) {

		_MyArr.InsertAtEnd(Value);
	}

	void Clear() {

		_MyArr.Clear();
	}


};