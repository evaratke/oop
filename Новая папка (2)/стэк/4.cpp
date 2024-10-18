/*#include <iostream>
using namespace std;
class Stack {
  enum { 
    EMPTY = -1, 
    FULL = 20 
  };
  int st_[FULL + 1];
  int top_;
public:
  void Clear(){
    top_ = EMPTY;
  }
  Stack() { Clear(); }
  bool IsFull(){
    return top_ == FULL;
  }
  void Push(int v){
    if(!IsFull())
      st_[++top_] = v;
  }
  void operator>> (ostream& out){
    for(int i = top_; i >= 0; i--){
      out << st_[i] << " ";
    }
    out << endl;
  }
  int GetCount(){
    return top_ + 1;
  }
  bool IsEmpty(){
    return top_ == EMPTY;
  }
  int GetTop(){
    return st_[top_];
  }
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

  Stack st;
  st.Push(2);
  st.Push(5);
  st.Push(1);

  st >> cout;
  cout << st.Extract() << endl;
  cout << st.Extract() << endl; 
  cout << st.Extract() << endl;

  return 0;
}*/


