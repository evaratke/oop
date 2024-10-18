/*#include <iostream>
using namespace std;
  //Сделать стек динамическим
class Stack {
  int* st_;
  int top_;
  int size_;
public:
  Stack() : Stack(10){};
  Stack(int size) : size_(size){
    st_ = new int[size_];
    Clear();
  }
  ~Stack(){delete[] st_;}
  void Clear(){top_ = -1;}
  bool IsFull(){return top_ == size_ - 1;}
  void Push(int v){
    if(!IsFull())
      st_[++top_] = v;
  }
int GetCount(){return top_ + 1;}
bool IsEmpty(){return top_ == -1;}
int GetTop(){return st_[top_];}
void Pop(){ 
  if(!IsEmpty())
    top_--;
}
int Extract(){ 
  if(!IsEmpty())
    return st_[top_--];
  return 0;
}
};
int main()
{
  using namespace std;

#if 1
  Stack st(50);
#else
  Stack<int, 50> st;
#endif

  for (size_t i = 0; !st.IsFull(); i++) 
    st.Push(i);

  while(!st.IsEmpty())
    cout << st.Extract() << endl;

  return 0;
}*/


/*#include <iostream>
using namespace std;
//шаблон
template <typename T, int SIZE_> class Stack{
private:
  T st_[SIZE_];
  int top_;
public:
  Stack() : top_(-1){};
  void Clear(){top_ = -1;}
  bool IsFull(){return top_ == SIZE_ - 1;}
  void Push(T v){
    if(!IsFull())
      st_[++top_] = v;
  }
  T GetCount(){return top_ + 1;}
  bool IsEmpty(){return top_ == -1;}
  T GetTop(){return st_[top_];}
  void Pop(){ 
    if(!IsEmpty())
      top_--;
  }
  T Extract(){
    if(!IsEmpty())
      return st_[top_--];
    return 0;
  }
};
int main()
{
  using namespace std;

#if 0
  Stack st(50);
#else
  Stack<int, 50> st;
#endif

  for (size_t i = 0; !st.IsFull(); i++)
    st.Push(i);

  while(!st.IsEmpty())
    cout << st.Extract() << " ";

  return 0;
}*/


/*class Stack {
  int* st_;
  int top_;
  int size_;
public:
  Stack() : Stack(10){};
  Stack(int size) : size_(size){
    st_ = new int[size_];
    Clear();
  }
  ~Stack(){delete[] st_;}
  void Clear(){top_ = -1;}
  bool IsFull(){return top_ == size_ - 1;}
  void Push(int v){
    if(!IsFull())
      st_[++top_] = v;
  }
int GetCount(){return top_ + 1;}
bool IsEmpty(){return top_ == -1;}
int GetTop(){return st_[top_];}
void Pop(){ 
  if(!IsEmpty())
    top_--;
}
int Extract(){ 
  if(!IsEmpty())
    return st_[top_--];
  return 0;
}
};*/