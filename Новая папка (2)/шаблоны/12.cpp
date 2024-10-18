/*#include <iostream>
using namespace std;

struct Point {
  int x_, y_;
  bool operator> (const Point& right);
};
ostream& operator<< (ostream& out, const Point& right);

template <typename T>
class Array {
  T* arr_;
  int size_;
public:
  Array(T arr[], int size): size_(size){
    this->arr_ = new T[size];
    for(int i = 0; i < this->size_; i++)
      this->arr_[i] = arr[i];
  }
  ~Array() { delete[] this->arr_; }

  void Sort();
  void Print();
};

template <typename T>
void Array<T>::Sort()
{
  for (int k = size_ - 1; k > 0; k--)
    for (int j = 0; j < k; j++)
      if (arr_[j] > arr_[j + 1])
        swap(arr_[j], arr_[j + 1]);
}
template <typename T>
void Array<T>::Print() 
{ 
  for(int i = 0; i < size_; i++)
    cout << arr_[i] <<" ";
  cout << endl;
}

int main ()
{
  // objects
  int intArr[5]{153, 23, 543, 234, 43};
  char chrArr[]{"fdaslnvfjdkl"};

  Array<int> a(intArr, 5);
  Array<char> c(chrArr, 12);
#if 0

  a.Sort();
  c.Sort();

  a.Print();
  c.Print();
#endif

  Point points[]{ {1,2},{3,4},{5,6} };
  Array<Point> p(points, 3);
#if 1

  p.Sort();	// ??
  p.Print();// ??

  p.Sort();	// ok
  p.Print();// ok
#endif

  return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;

class Box{
  std::string value_;
public:
  Box();
  Box(const char*);
  double Size() { return 2; }
  string ToString();
};
class Car{
  std::string model_;
public:
  Car();
  Car(const char*);
  double Size() { return 3; }
  string ToString();
};
// template <typename T, int LIMIT>
template <typename T>
class Container{
  T* ptr_;
  int count_;
  static const int limit_ = 6; 
public:
  Container(initializer_list<T> list){
    this ->count_ = list.size();
    this->ptr_ = new T[this->count_]; 
    const T* temp = list.begin();
    for(int i = 0; i < this->count_; i++){
      ptr_[i]= temp[i];
    }
  }
  ~Container() { delete[] this->ptr_; }
  void Show() {
    cout <<"conatiner: ";
    for(int i = 0; i < this->count_; i++){
      cout << this->ptr_[i] << " ";
    }
  }
  bool IsFull(){
   return this->count_ == limit_;
  }
  void Load(T el){
    if(this->IsFull())
      throw "container if full";
   T* tmp = new T[this->count_+1];
    for(int i = 0; i < this->count_; i++){
      tmp[i] = this->ptr_[i];
    }
    tmp[this->count_] = el;
    this->count_++;
    delete[] this->ptr_;
    this->ptr_ = tmp;
    
  }
};
int main ()
{
  Container<int> cInt({1,2,5,8});
  cInt.Show();
  cout << endl;
  cout << cInt.IsFull() << endl;
  cInt.Load(10);
  cInt.Show();
  return 0;
}*/