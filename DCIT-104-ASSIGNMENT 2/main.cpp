#include <iostream>

using namespace std;

int main()
{
	cout << "Calculate the sum of even numbers from 1 to 10,000." << endl << endl;

	int sum = 0;
	int countEven = 1;

	for(int a=2; a<=10000; a++){
		if(a%2 == 0){
			sum = sum + a;
			countEven++;
	}
}

	cout << "The number of even numbers available in the given range is:  " << countEven << endl << endl;
	cout << "The sum of the even numbers is: " << sum << endl << endl;

	float avg;
	avg = sum/countEven;
	cout << "The mean is therefore calculated as: " << avg <<endl;

    return 0;
}
