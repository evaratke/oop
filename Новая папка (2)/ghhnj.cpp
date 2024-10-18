//Ханойские башни в стиле ООП

#include <iostream>
#include <string>
#include <initializer_list>
#include <stack>
using namespace std;
class Ring{
  private:
    int size_;
  public:
    Ring(int s) : size_(s){}
    string ToString(){return to_string(this->size_);}
    bool operator< (const Ring& r) const{
    
      return this->size_ < r.size_;}
};
class Stick{
  public:
    stack<Ring> st_;
    Stick(){}
    Stick(Ring r){this->st_.push(r);}
    string ToString(){
      stack<Ring> copy;
      copy = this->st_;
      string res;
      while(!copy.empty()){ //пока не пустой
        res += "     " + copy.top().ToString() + "\n";  
        copy.pop();
      }
      return res;
    }
    bool Move(Stick& other){
      if(this->st_.empty())
        throw "Stick is empty";
      Ring t = st_.top();
      if(t < other.st_.top()){
        other.st_.push(t);
        this->st_.pop();
        return true;
      }
     return false;
    }
    void Swap(Stick other){
      if(this->st_.top() < other.st_.top() || this->st_.empty())
        this->Move(other);
      else
        other.Move(*this);
    }
};
class Hanoy{
  private:
    Stick bar_[3];
  public:
    Hanoy(int count){
      while(count--){
        this->bar_[0].st_.push(Ring(count));
      }
    }
    void operator>> (ostream& out){
      for(int i = 0; i < 3; i++){
        out << bar_[i].ToString() << " ";
      }
    }
  void Step(int from, int to){
    bar_[from].Swap(bar_[to]);
  }
     vvvvvvvvvvvvvcccccccccccc     };
int main(){
  Hanoy game(7);
  game >> cout;
  Stick st1(5), st2(3);
  #if 0
  Stick st1,st2(3);
  st1.Move(st2);
  cout << st1.ToString() << endl;
  cout << st2.ToString() << endl;

  initializer_list<Ring> list {0,1,2};
  for(Ring r : list){
    cout << r.ToString() <<  " ";
  }
#endif
}