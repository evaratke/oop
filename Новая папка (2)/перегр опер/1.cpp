/*#include <iostream>
#include <string>
using namespace std;
class Student {
  std::string name_;
  short born_ ;
  short age_;
public:
  Student(std::string name, short year){
    this->name_ = name;
    this-> born_ = year;
    this->age_ = 2024 - year;
  }
  std::string ToString(){
    return name_ + " (" + std::to_string(age_) + ")";
  }
  void operator+ (std::string name){
    this->name_ = name;
  }
short operator+ (short age){
  this->age_ += age;
  born_ -= age;
  return born_;
}
};

int main ()
{
  Student student("Ivan", 2010);
  student + "Petrov";
  std::cout << student.ToString();
  cout << " " << student + 4;
  return 0;
}*/