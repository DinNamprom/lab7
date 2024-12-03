#include<iostream>
using namespace std;

char before(char x){
	if (int(x) < int('A') || int(x) > int('Z')){
		x = '0';
	}else {
		x-= 1;
		if (int(x) < int('A')) {
			x = 'Z';
		}else if (int(x) > int('Z')) {
			x = 'A';
		}
	}
	return x;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
