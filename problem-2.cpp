 

#include <iostream>
#include <string>
using namespace std;
class Person {
private:

	string lname; // Person’s last name
	string fname; // Person’s first name
public:
	Person() { lname = ""; fname = ""; } // #1
	Person(const string & ln, const string & fn = "Heyyou") {
		lname = ln;
		fname = fn;


	}
	void Show() const {

		cout << fname << " " << lname << endl;


	} // firstname lastname format
	void FormalShow() const {

		cout << lname << " " << fname << endl;

	}
};
void main() {
	Person one("Dimwiddy", "Sam");
	Person two("Smythecraft"); 
		Person three("Dimwiddy", "Sam");
		one.Show();
	cout << endl;
	one.FormalShow();

	system("pause");

}