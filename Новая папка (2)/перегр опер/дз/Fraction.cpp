// // В существующий класс Fraction добавить перегрузку операторов для выполнения операций:

// // ++(дробь) и (дробь)++ - увеличение числа на 1
// // cout << - вывод дроби в консоль
// // cin >> - считывание значений дроби из консоли
// #include <iostream>
// #include <string>
// using namespace std;
// struct Fraction {
// private:
//     int a1;
//     int b1;
//     static int count;
//     int lcm(int b1, int b2) const {
//         return (b1 * b2) / gcd(b1, b2); 
//     }
//     int gcd(int a, int b) const {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }
//     Fraction calculate(Fraction x, int (*operation)(int, int)) const {
//         int lcm = this->lcm(b1, x.GetDenominator());
//         int numerator = operation(a1 * (lcm / b1), x.GetNumerator() * (lcm / x.GetDenominator()));
//         return Fraction(numerator, lcm).simplify();
//     }
//     Fraction simplify() const {
//         int commonFactor = gcd(a1, b1);
//         return Fraction(a1 / commonFactor, b1 / commonFactor);
//     }
// public:
//     Fraction() : a1(0), b1(1) { count++; }
//     Fraction(int num, int den) : a1(num), b1(den) { count++; }
//     ~Fraction() { count--; }
//     static int GetCount() { return count; }
//     void Init(int numerator, int b) {
//         a1 = numerator;
//         b1 = b;
//     }
//     string ToString() const {
//         return to_string(a1) + "/" + to_string(b1);
//     }
//     int GetNumerator() const {
//         return a1;
//     }
//     int GetDenominator() const {
//         return b1;
//     }
//     Fraction CreateFraction(int a, int b) const {
//         Fraction fraction;
//         fraction.Init(a, b);
//         return fraction;
//     }
//     Fraction operator+(const Fraction& x) const {
//         return calculate(x, [](int a, int b) { return a + b; });
//     }
//     Fraction operator-(const Fraction& x) const {
//         return calculate(x, [](int a, int b) { return a - b; });
//     }
//     Fraction operator*(const Fraction& x) const {
//         return Fraction(a1 * x.GetNumerator(), b1 * x.GetDenominator()).simplify();
//     }
//     Fraction operator/(const Fraction& x) const {
//         return Fraction(a1 * x.GetDenominator(), b1 * x.GetNumerator()).simplify();
//     }
//     bool operator==(const Fraction& x) const {
//         return (a1 * x.GetDenominator() == b1 * x.GetNumerator());
//     }
//     bool operator!=(const Fraction& x) const {
//         return !(*this == x);
//     }
//     bool operator<(const Fraction& x) const {
//         return (a1 * x.GetDenominator() < b1 * x.GetNumerator());
//     }
//     bool operator<=(const Fraction& x) const {
//         return (*this < x) || (*this == x);
//     }
//     bool operator>(const Fraction& x) const {
//         return !(*this <= x);
//     }
//     bool operator>=(const Fraction& x) const {
//         return !(*this < x);
//     }
//     Fraction operator-() const {
//         return Fraction(-a1, b1);
//     }
//     Fraction operator++() {
//         a1++;
//         return *this;
//     }
//     Fraction operator++(int){
//         Fraction temp = *this;
//         a1++;
//         return temp;
        
//     }
//     friend ostream& operator<<(ostream& out, const Fraction& fraction){}
// };
// int Fraction::count = 0;
