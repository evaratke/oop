// #include <assert.h>
// #include <iostream>
// #include <sstream>
// using namespace std;

// #include "Fraction.cpp"

// void TestInc() {
//   Fraction a(1, 2), b(3, 2);
//   {
//     Fraction f(1, 2);
//     assert(++f == b);
//     assert(f == b);
//   }
//   {
//     Fraction f(1, 2);
//     assert(f++ == a);
//     assert(f == b);
//   }
// }
// void TestOstream() {
//   ostringstream s;
//   s << Fraction(1, 2);
//   assert(s.str() == "1/2");
// }
// void TestIstream() {
//   istringstream s("1 2");
//   Fraction f;
//   s >> f;
//   assert(f == Fraction(1, 2));
// }

// int main ()
// {
//   TestInc();
//   TestOstream();
//   TestIstream();

//   return 0;
// }