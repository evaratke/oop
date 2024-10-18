// #include <assert.h>
// #include <iostream>

// #include "solve.h"
// #if LVL_CLASS
// int CheckBrackets(std::string str) {
//   Checker c(str);
//   return c.GetWrongIndex();
// }
// #endif
// void TestBrackets() {
//   assert( CheckBrackets("({x-y-z}*[x+2y]-(z+4x));") == -1 );
//   assert( CheckBrackets("([x-y-z}*[x+2y)-{z+4x)].") == 7 );
//   assert( CheckBrackets("1;") == -1 );
//   assert( CheckBrackets(")(") == 0 );
//   assert( CheckBrackets("[3x4y]") == 6 );
// }
// int main ()
// {
//   TestBrackets();
//   std::cout << "Brackets done\n";

//   return 0;
// }