#Answers

##1. 
	A class is a c++ vehicle for translating an abstraction to a user-defined type . It combines data representation and methods for manipulating that data into one neat package . A class declaration which describs the data component, in terms of data members functions , termed methods .the class definations , which describe how certain class member functions are implemented .

##2.
	A class accomplish abstraction by representing the operations you can perform on a class object with a public interface of class method . A class accomplish encapsulation by hiding the details of the implementation , such as data representation and method code . A class accomplish data hiding by using private visibility (the default) for data members that means the data can be accessed only through the member functions .

##3.
	An object is a variable or another data object , which is created and used according to the class definition , The relationship between a class and an object is the same as that between a standard type and a variable of that type.

##4.
	If you creat several objects of a given class , each object comes with storage for its own set of data . But all the objects use the one set of member functions . Methods are public , data members are private but that’s matter of policy not of class requirements .

##5.
```cpp
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public :
	string name ;
	string accountnumber  ;
	double balance = 0;
	double withdraw = 0;
	double diposited = 0;



public:

	BankAccount(string n, string a, double b) ;
	
  void displaymessage () ;
	void deposit(double diposited );
	void withdrawing( double withdraw);

};
```
## 6.
class constructors are called when you creat an object of that class or when you expictly call the constructor .
A class destructor is called when the object expires .


## 7.
```cpp
BankAccount(string n, string a, double b) {
	name = n;
	accountnumber = a; 
balance = b; }
 ```
 
## 8.
 A default constructor has no arguments , Having a default constructor enables you to declare objects without initializing them .
 
## 10.
 The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object, and *this represents the
object itself



