

#include <iostream>
#include <string>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0) {
		x = a; // assign a in x 
		y = b;
	
	} // sets x, y to a,b
	
	void showmove()  {
	
		cout << "X is " << x << endl;
		cout << "Y is " << y << endl;

	} // shows current x, y values
	Move* add( Move &m)  {
		
		x = x + m.get_x();
		y = y + m.get_y();
		return this;
	}
	// this function adds x of m to x of invoking object to get new x,
	 double	get_x() {
	return x;
	
	}
 double	get_y() {
	return y;

}

void reset(double a = 0, double b = 0) {

	x = a; 
	y = b;


} // resets x,y to a, b
};

 void main() {

	Move m1(5,4);
	Move m2(6, 3);
	m1.showmove();
	m1.add(m2);
	m1.showmove();
	m1.reset();

	system("pause");
}