// #include <iostream>
// #include <time.h>
// using namespace std;
// class Queue
// {
//   enum { EMPTY = 0, FULL = 10};
//   int wait_[FULL];//Очередь
//   int length_;	//Текущий размер очереди
// public:
//   void Clear(){
//     length_ = EMPTY;
//   }
//   Queue() {Clear();}
//   bool IsFull(){return length_ == FULL;}
//   void Add(int v){
//     if(!IsFull())
//       wait_[length_++] = v;
//     else
//       throw "Queue is full";
//   }
//   void operator>> (std::ostream& out) {
//     for(int i = 0; i < length_; i++){
//       out << wait_[i] << " ";
//     }
//   }
//   int GetCount(){return length_;}
//   bool IsEmpty(){	return length_ == EMPTY;}
//   int GetFront(){	return wait_[0];}
//   void PopFront(){	
//     if(!IsEmpty()){
//       for(int i = 0; i < length_ ; i++){
//         wait_[i] = wait_[i + 1];
//       }
//       length_--;
//     }
//     else{
//       throw "Queue is empty";
//     }
//   }
//   int Extract(){	
//     if(!IsEmpty()){
//       int v = wait_[0];
//       PopFront();
//       return v;
//     }
//     else
//       throw "Queue is empty";
//     return 0;
//   }
//   int c(int a){
//      return length_ = a;
//   }
// };

// int main()
// {
//   using namespace std;
//   srand(time(0));

//   Queue q; 

//   for (int i = 0; i < 5; i++) 
//     q.Add( rand() % 50 );

//   q >> cout; // 12 9 40 2 27
//   cout << endl;
//   cout << "First: " << q.Extract() << endl;
//   q >> cout ; // 9 40 2 27
//   cout << endl << endl;

//   /*Используя объект класса:
//   - Заполнить очередь до максимума (независимо от значения FULL)
//   - Вывести содержимое
//   - Освободить половину очереди
//   - Заполнить освободившееся место новыми зачениями
//   - Извлечь все элементы и вывести каждый на экран
//   */
//   while(!q.IsFull()){
//     q.Add( rand() % 50 );
//   }
//   q >> cout;
//   cout << endl;
//  q.c(q.GetCount() / 2);
//   while(!q.IsFull()){
//     q.Add( rand() % 50 );
//   }
//   q >> cout;
//   cout << endl;
//   while(!q.IsEmpty()){
//     cout << q.Extract() << " ";
//   }
// }