#include <iostream>
using namespace std;
class Student {
public:
int rollNumber;
private:
int age;
public:
// Default constructor
Student(){
    cout << "Constructor called" << endl;
    }
// Parameterized constructor
Student(int rollNumber){
    cout << "Constructor 2 ccalled" << endl;
    this -> rollNumber = rollNumber;   
}
Student(int a, int r){
    cout << "this: " << this << endl;
    cout << "Constructor 3 called" << endl;
    this -> age = a;
    this -> rollNumber = r;
}
int getAge(){
    return age;
}
void setAge(int a, int password){
    if(password != 123){
        return;
    }
    if(a < 0){
        return;
    }
    age = a;
}
};