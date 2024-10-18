/*#include <iostream>
using namespace std;
template <typename T>
class Array {
private:
  T* data;
  int size;
public:
  Array() : data(nullptr), size(0) {} 
  Array(const initializer_list<T>& list) : size(list.size()) {
    data = new T[size];
    int i = 0;
    for (auto& element : list)
      data[i++] = element;
  }
  Array(int size, const T& value = T()) : size(size) {
    data = new T[size];
    for (int i = 0; i < size; ++i) 
      data[i] = value;
  }
  Array(const Array<T>& other) : size(other.size) { 
    data = new T[size];
    for (int i = 0; i < size; ++i) 
      data[i] = other.data[i];
  }
  Array(Array<T>&& other) : data(other.data), size(other.size) { 
    other.data = nullptr;
    other.size = 0;
  }
  ~Array() {delete[] data;}
  Array<T> operator+(const Array<T>& other) const {
    Array<T> result(size + other.size);
    for (int i = 0; i < size; ++i) 
      result.data[i] = data[i];
    for (int i = 0; i < other.size; ++i) 
      result.data[i + size] = other.data[i];
    
    return result;
  }
  int Len() const {
    return size;
  }
  T& operator[](int index) {
    if (index < 0 || index >= size) 
      throw out_of_range("Index out of range");
    return data[index];
  }
  const T& operator[](int index) const {
    if (index < 0 || index >= size) 
      throw out_of_range("Index out of range");
    return data[index];
  }
};
template <typename T>
ostream& operator<<(ostream& out, const Array<T>& arr) { 
  for (int i = 0; i < arr.Len(); ++i) {
    out << arr[i] << " ";
  }
  return out; 
}*/