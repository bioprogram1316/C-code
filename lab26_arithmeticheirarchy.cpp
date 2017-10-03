#include <iostream>
using namespace std;

void inc(int &n) {
    n++;
}

void dec(int &n) {
    n--;
}

int add(int a, int b) {
	int sum=a;
	for (int i=0; i<b; inc(i))
		inc(sum);
	return sum;
}

int sub(int a, int b) {
	int difference=a;
	for (int i=0; i<b; inc(i))
		dec(difference);
	return difference;
}

int mult(int a, int b) {
	int product=0;
	for (int i=0; i<b; inc(i)) {
		 for (int i=0; i<a; inc(i))
		 	inc(product);
	 }
	return product;
}

int divide(int a, int b) {
	int quotient=a, count=0;
    while(quotient>=b) {
        for (int i=0; i<b; inc(i))
            dec(quotient);
        inc(count);
    }
	return count;
}

int rem(int a, int b) {
	int remainder=a;
    while(remainder>=b) {
        for (int i=0; i<b; inc(i))
            dec(remainder);
    }
	return remainder;
}

int exp(int a, int b) {
	int result=1;
	for (int i=0; i<b; inc(i)) {
        result=mult(result, a);
	}
	return result;
}

int log(int a, int b) {
	int logarithm=0;
    while (divide(a,b)>0) {
        a=divide(a,b);
        logarithm=add(logarithm, 1);
    }
	return logarithm;
}

int main () {
	int a, b;
	cout << "Please enter two integers separated by a space: ";
	cin >> a >> b;
	cout << a << " + " << b << " == " << add(a, b) << endl;
	cout << a << " - " << b << " == " << sub(a, b) << endl;
	cout << a << " * " << b << " == " << mult(a, b) << endl;
	cout << a << " / " << b << " == " << divide(a, b) << endl;
	cout << a << " % " << b << " == " << rem(a, b) << endl;
	cout << a << " to the " << b << " == " << exp(a, b) << endl;
	cout << a << " log base " << b << " == " << log(a, b) << endl;

	return 0;
}
