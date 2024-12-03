#include<iostream>
using namespace std;

char before(char x){
    if(x==65){
        return x = 90;
    }
    if(x>65 && x<=90) {
        return x = x-1;
    }
    else{
        return x=48;
    }
}

int main(){
	
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
