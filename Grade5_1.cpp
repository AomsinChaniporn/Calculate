#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int score;
	cout << "\nEnter score : ";
	cin >> score;
	if (score >= 90 && score <= 100)
		cout << "You grade A\n";
	else if (score >= 80 && score <= 89)
		cout << "You grade B\n";
	else if (score >= 70 && score <=79)
		cout << "You grade C\n";
	else if (score >= 60 && score <= 69)
		cout << "You grade D\n";
	else if (score >= 0 && score <= 59)
		cout << "You grade F\n";
	else
		cout << "error";
	return(0);
}