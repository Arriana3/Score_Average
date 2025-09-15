
/* file name: score_average.cpp 
   Programmer: Arriana Maldonado
   Date: 9/15/25
   Purpose: Take in three values, determin e their averages and display them.*/

#include <iostream>
using namespace std;
int main()
{
	int score1, score2, score3;
	double average;
	cout << "Please enter your first score: ";
	cin >> score1;
	cout << "Please enter your second score: ";
	cin >> score2;
	cout << "Please enter your third score: ";
	cin >> score3;

	average = (score1 + score2 + score3) / 3.0;

	cout << "The average of the three scores is: " << average << endl;

	return 0;
}
