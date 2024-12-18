// Shane Pricken
// Do now
// 12/18/24
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Program 1
    double num;
    cout << "Enter a really cool decimal number: " << endl;
    cin >> num;
    
    cout << "That number rounded to 2 decimal places is " << ceil(num * 100.0) / 100.0 << endl;
    
    // Program 2
	srand((unsigned) time(NULL));
	
	int random = rand()%10+1;
	
	cout << random << endl;

    return 0;
}
