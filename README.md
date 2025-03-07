# 📌 Queue Implementation (clsMyQueueArr) ⚡

> **A C++ template-based queue implementation using a dynamic array (`clsDynamicArray`), supporting basic queue operations along with advanced functionalities. 🚀**

---

## 🌟 Project Overview

The `clsMyQueueArr` class provides a **generic queue** implementation in C++, leveraging the `clsDynamicArray` class for efficient memory management and queue operations. It supports fundamental operations like **enqueue (push)**, **dequeue (pop)**, **peek front & back**, and extended functionalities for dynamic queue modifications.

### 🔹 Core Functionalities:
- **Enqueue (Push) & Dequeue (Pop)** 🚀
- **Access Front & Back Elements** 🔍
- **Check Queue Size & Emptiness** 📏
- **Reverse Queue Elements** 🔄
- **Modify & Insert Elements Within Queue** ✏️
- **Clear the Queue in One Call** ✨

This queue implementation is **generic**, meaning it can store any data type using C++ templates.

---

## ✨ Features

### 🔹 Basic Queue Operations
- **`Push(Value)`**: Adds an element to the back of the queue.
- **`Pop()`**: Removes the front element from the queue.
- **`Front()`**: Retrieves the front element of the queue.
- **`Back()`**: Retrieves the last element of the queue.
- **`Size()`**: Returns the number of elements in the queue.
- **`IsEmpty()`**: Checks if the queue is empty.
- **`Print()`**: Displays the queue elements.

### 🔹 Extended Functionalities
- **`GetItem(Index)`**: Retrieves the value at a specific index.
- **`Reverse()`**: Reverses the order of queue elements.
- **`UpdateItem(Index, NewValue)`**: Updates the value at a given index.
- **`InsertAfter(Index, Value)`**: Inserts an element after a specified index.
- **`InsertAtFront(Value)`**: Inserts an element at the front of the queue.
- **`InsertAtBack(Value)`**: Inserts an element at the back of the queue.
- **`Clear()`**: Removes all elements from the queue.

---

## 🚀 How It Works

### 🔹 Push & Pop
- Elements are added using `Push(Value)` at the **back** of the queue.
- Elements are removed using `Pop()` from the **front**.

### 🔹 Accessing Elements
- `Front()` and `Back()` allow **direct access** to the first and last elements.
- `GetItem(Index)` retrieves an element at a specific position.

### 🔹 Modifications & Reversal
- `UpdateItem(Index, NewValue)` modifies an existing value.
- `Reverse()` swaps element positions to **reverse** the queue order.
- `InsertAfter(Index, Value)`, `InsertAtFront(Value)`, and `InsertAtBack(Value)` allow **custom insertions**.

### 🔹 Memory Management
- The queue dynamically allocates memory for new elements.
- `Clear()` safely removes all elements to prevent memory leaks.

---

## 📚 Potential Enhancements

- 🏗 **Iterator Support**: Implementing iterators for STL-like traversal.
- ⏳ **Time Complexity Optimization**: Enhancing performance for large datasets.
- 🗃️ **Persistent Storage**: Implementing file handling for saving queue data.
- 🚀 **Thread Safety**: Making the queue thread-safe for concurrent operations.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enables the queue to store any data type.
- **Dynamic Array-based Queue**: Uses `clsDynamicArray` for flexible data storage.
- **Memory Management**: Utilizes dynamic memory allocation.

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Queue operations (push, pop, front, back, size, empty check)**
- ✅ **Generic programming with C++ templates**
- ✅ **Efficient memory management with dynamic arrays**
- ✅ **Advanced queue modifications (insertion, reversal, updating)**

---

## 📜 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsMyQueueArr.h` in your project.
3. **Compile & Run** your C++ program with a standard compiler (e.g., `g++ main.cpp -o output`).
4. **Test** different queue operations.

