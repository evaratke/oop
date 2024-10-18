// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// class Checker {
// private:
//   string str_;
//   stack<char> bracketStack_;
//   bool expect_ = false;
// public:
//   Checker(const string& str) : str_(str) {}
//   bool IsCorrect() {
//     for (size_t i = 0; i < str_.length(); ++i) {
//       char ch = str_[i];
//       if (ch == '(' || ch == '[' || ch == '{')
//         OpeningBracket(ch);
//       else if (ch == ')' || ch == ']' || ch == '}') {
//         if (bracketStack_.empty() || !MatchingBracket(bracketStack_.top(), ch)) 
//           return false;
//         bracketStack_.pop();
//       }
//     }
//     return bracketStack_.empty();
//   }
// int GetWrongIndex() {
//   for (size_t i = 0; i < str_.length(); ++i) {
//     char ch = str_[i];
//     if (ch == '(' || ch == '[' || ch == '{') 
//       OpeningBracket(ch);
//      else if (ch == ')' || ch == ']' || ch == '}') {
//       if (bracketStack_.empty() || !MatchingBracket(bracketStack_.top(), ch)) 
//         return i;
//       bracketStack_.pop();
//       expect_ = true; 
//     } 
//     else if (ch == ';') 
//       expect_ = false; 
//     else if (ch == ';' && !expect_) 
//       return i; 
//   }
//   if (bracketStack_.empty() && !expect_) 
//     return -1; 
//   else 
//     return str_.length(); 
// }
// string GetStringResult() {
//   int wrongIndex = GetWrongIndex();
//   if (wrongIndex == -1) 
//     return str_;
//   return "";
// }
// private:
//   bool MatchingBracket(char opening, char closing) {
//     if (opening == '(' && closing == ')') 
//       return true;
//     else if (opening == '[' && closing == ']') 
//       return true;
//     else if (opening == '{' && closing == '}') 
//       return true;
//     return false;
//   }
//   void OpeningBracket(char ch) {
//     bracketStack_.push(ch);
//     expect_ = true;
//   }
// };
// int CheckBrackets(string str) {
//   Checker c(str);
//   return c.GetWrongIndex();
// }