#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
	int _Size = 0;
	T* _TempArray;

public:

	T* OriginalArray;

	clsDynamicArray(int Size = 0) {

		if (Size < 0) {
			Size = 0;
		}

		_Size = Size;
		OriginalArray = new T[_Size];
	}

	~clsDynamicArray() {

		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value) { 

		if (Index >= _Size || Index < 0) 
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;
	}


	int Size() {

		return _Size;
	}

	bool IsEmpty() {

		return (_Size == 0) ? true : false;
	}

	void PrintList() {

		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		
		cout << endl; 
	}


	void Resize(int New_Size) {

		if (New_Size < 0 )
			New_Size = 0;

		if (New_Size == _Size)
			return;

		_TempArray = new T[New_Size]; 

		// Limit The Original Size To The New Size if it is Less. 
		if (New_Size < _Size) {

			_Size = New_Size;
		}

		// Copy All Data From Original Array Until The Size 
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = New_Size;

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}



	T GetItem(int Index) {

		if (Index >= _Size || Index < 0)
			return NULL;
		

		return OriginalArray[Index];
	}



	void Reverse() {

		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[_Size - i - 1];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}


	void Clear() {

		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}


	bool DeleteItemAt(int Index) {

		if (Index >= _Size || Index < 0)
			return false;

		_Size--;
		_TempArray = new T[_Size];

		// Copy all Before Index 
		for (short i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		// Copy all After Index 
		for (short i = Index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}


	void DeleteFirstItem() {

		DeleteItemAt(0);
	}

	void DeleteLastItem() {

		DeleteItemAt(_Size - 1);
	}

	int Find(T Value) {

		for (short i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
				return i;
		}
		return -1;
	}


	bool DeleteItem(T Value) {

		int Index = Find(Value);

		if (Index == -1)
			return false;

		DeleteItemAt(Index);
		return true;
	}


	bool InsertAt(int Index, T Value) {

		if (Index > _Size || Index < 0)
			return false;

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_TempArray[Index] = Value;

		for (int i = Index; i < _Size - 1; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}


	void InsertAtBeginning(T Value) {

		InsertAt(0, Value);
	}

	bool InsertBefore(int Index, T Value) {

		if (Index < 1)
			return InsertAt(0, Value);

		else
			return InsertAt(Index - 1, Value);

	}

	bool InsertAfter(int Index, T Value) {

		if (Index >= _Size)
			return InsertAt(_Size , Value);

		else
			return InsertAt(Index + 1, Value);

	}

	bool InsertAtEnd(T Value) {

		return InsertAt(_Size, Value);
	}

};