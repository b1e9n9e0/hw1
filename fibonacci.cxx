/*
 * fibonacci.cxx
 *
 *  Created on: 28.10.15
 *      Author: b1e9n9e0
 */




#include <iostream>

using namespace std;

int main(){
unsigned long long a = 0;
unsigned long long b = 1;
unsigned long long c = 0;
int in = 0;
cout << "Please enter a non negative integer" << endl;
cin >> in;
if(in < 0){
	cout << "nope" << endl;
	return 0;
}

if(in > 92){
	cout << "this gets too big..." << endl;
	return 0;
}

cout << a << endl;
for(int i = 0 ; i<= in ; i++){
	cout << b << endl;
	c = b;
	b += a;
	a = c;
}
	return 0;
}