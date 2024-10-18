// #include <iostream>
// #include <queue>
// #include <sstream>
// #include <initializer_list>
// #include <limits>
// using namespace std;
// template<typename T>
// class Printer { 
//   public:
//     void Add(const T& a_) {queue_.push(a_);}
//     void Add(initializer_list<T> b_) {
//         for (const auto& a_: b_) {
//             queue_.push(a_);
//         }
//     }
//     string Print(size_t n = numeric_limits<size_t>::max()) {
//         ostringstream oss;
//         size_t to_print = min(n, queue_.size());
//         for (size_t i = 0; i < to_print; ++i) {
//             oss << queue_.front() << " ";
//             queue_.pop();
//         }
//         return oss.str();
//     }
//     size_t Len() const {return queue_.size();}
//     bool IsEmpty() const {return queue_.empty();}
//   private:
//     queue<T> queue_;
// };