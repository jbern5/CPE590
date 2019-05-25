#include <iostream>
using namespace std;

int main(){
	for(int i = 74; i <= 291; i++){
		if(i % 3 == 0){
			cout << "Buzz" << endl;
		}
		else if(i % 5 == 0){
			cout << "Fizz" << endl;
		}
		else if(i % 3 == 0 && i % 5 == 0){
			cout << "BuzzFizz" << endl;
		else{
			cout << i << endl;
		}
	}
}