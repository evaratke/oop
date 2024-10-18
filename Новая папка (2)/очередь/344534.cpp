// #include <iostream>


// class Queue{
// private:
//   int* wait_;//Очередь
//   int length_;	//Текущий размер очереди
//   int priority; //Приоритет
// public:
// /*
//   - Заменить массив на динамический
//   - Реализовать поотдельности: 
//     - Кольцевую очередь
//     - Очередь с приоритетным включением
//     - Очередь с приоритетным исключением
//   - Сделать очередь шаблонной
// */
//   Queue() : Queue(10){};
//   Queue(int size) : length_(0), priority(0){
//     wait_ = new int[size];
//   }
//   ~Queue(){delete[] wait_;}
//   void Clear(){length_ = 0;}
//   bool IsFull(){return length_ == 10;}
//   void Add(int v){
//     if(!IsFull()){
//       wait_[length_++] = v;
//     }
//     else 
//       throw "Queue is full";
//   }
//  void operator>> (std::ostream& out) {
//     for(int i = 0; i < length_; i++){
//       out << wait_[i] << " ";
//     }
//   }
//   int GetCount(){return length_;}
//   bool IsEmpty(){	return length_ == 0;}
//   int GetFront(){	return wait_[0];}
//   void PopFront(){
//     if(!IsEmpty()){
//           for(int i = 0; i < length_ ; i++){
//             wait_[i] = wait_[i + 1];
//           }
//           length_++;
//         }
//         else{
//           throw "Queue is empty";
//         }
//       }
//   int Extract(){ 
//     if(!IsEmpty()){
//       int v = wait_[0];
//       PopFront();
//       return v;
      
//     }
//     return 0;
//   }
//   int c(int a){
//       return length_ = a;
//     }
//   int GetPriority(){return priority;}
//   void SetPriority(int a){priority = a;}
// //кольцевая очередь
// void Add2(int v){  
//   if(!IsFull()){
//     wait_[length_++] = v;
//   }
//   else{
//     wait_[0] = v;
//   }
  
// }
// int Extract2(){
//   if(!IsEmpty()){
//     int v = wait_[length_ - 1];
//     for(int i = 0; i < length_ - 1; i++){
//       wait_[i] = wait_[i + 1];
      
//     }
//     length_--;
//     return v;
//   }
//   return 0;
// }

// //очередь с приоритетным включением
// void Add3(int v){
//   if(!IsFull()){
//     wait_[length_++] = v;
//   }
//   else{
//     if(priority == 0){
//       wait_[length_++] = v;
//     }
//     else {
//       for(int i = length_ - 1; i >= 0; i--){
//         if(priority > wait_[i]){
//           wait_[i + 1] = wait_[i];
//         }
//         else {
//           wait_[i + 1] = v;
//           break;
//         }
//       }
//     }
//   }
// }
// //очередь с приоритетным исключением

// };




// int main()
// {
//   using namespace std;
//   Queue q1;
//   while(q1.GetCount() < 10){
//     q1.Add2(rand() % 10);
//   }
//   q1 >> cout;
//   q1.Extract2();
//   cout << endl;
  
//   q1 >> cout;
//   return 0;
// }


/*#include <iostream>
#include <string>
using namespace std;
//пьяница игра
template<typename T>
struct Card{
  T value_;
  Card(T value) : value_(v){}
string ToString() const{
  std::iostream s;
  s << value_;
  return s.str();
}

};
int main(){
  initializer_list<Card> list {0,1,2,3};
  for(Card x : list){
    cout << x.ToString() << endl;
  }
}*/