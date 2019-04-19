#include <iostream>

using namespace std;

void const_variable();
void sizeof_xx();
void type_error();
void abs_value();
void bigger();

int main()
{
	/*int radius;
	cout << "please enter the radius!\n";
	cin >> radius;
	cout << "the radius is:" << radius << '\n';
	cout << "pi is:" << 3.14 << '\n';
	cout << "please enter a different radisu!\n";
	cin >> radius;
	cout << "now the radisu is changed to:"
		<< radius << '\n';*/

	//const_variable();
	//sizeof_xx();
	//type_error();
	//abs_value();
	bigger();

	return 0;
}

void const_variable()
{
	const double pi(3.14159);
	//const double pi = 3.14158;
	//const double pi{ 3.14157 };

	int radius;
	cout << "Please enter the radius!\n";
	cin >> radius;
	cout << "The radius is:" << radius << '\n';
	cout << "PI is:" << pi << '\n';
	cout << "Please enter a different radius!\n";
	cin >> radius;
	cout << "Now the radius is changed to:" << radius << '\n';
	cout << "PI is still:" << pi << '\n';
}

void sizeof_xx() {
	cout << "The size of an int is:\t" << sizeof(int) << " bytes.\n";
	cout << "The size of a short int is:\t" << sizeof(short) << " bytes.\n";
	cout << "The size of a long is :\t" << sizeof(long) << " bytes.\n";
	cout << "The size of a char is :\t" << sizeof(char) << " bytes.\n";
	cout << "The size of a float is:\t" << sizeof(float) << " bytes.\n";
	cout << "The size of a double is:\t" << sizeof(double) << " bytes.\n";
}

void type_error() {
	unsigned int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z;
	cout << "Difference is :" << x;
	x = z - y; //这里z值为负数，类型错误。
	cout << "\nNow the Difference is:" << x << endl;
}

void abs_value() {
	int a, b, x;
	
	cout << "input value of a:\n";
	cin >> a;

	cout << "input value of b:\n";
	cin >> b;

	x = (a - b) > 0 ? (a - b) : (b - a);

	cout << "The difference of a and b is:\t" << x;
}

void bigger() {
	int x, y;
	cout << "Enter x and y:";
	cin >> x >> y;
	if (x != y)
		if (x > y)
			cout << "x>y" << endl;
		else
			cout << "x<y" << endl;
	else
		cout << "x=y" << endl;
}