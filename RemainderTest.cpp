#include <iostream>
#include <ctime>
using namespace std;
int generateQuestionAndAnswer(int& dividend, int& divisor)
{
	//variables store the remainder
	int answer;

	// dividend and divisor randomly choose by compyter
	dividend = rand() % 9 + 1;
	divisor = rand() % 9 + 1;

	//return the answer
	return answer = dividend % divisor;

}

//function answerCorrect
bool answerCorrect(int& input, int& answer)
{
	//return boolean when input is correct
	if (input == answer)
		return true;
	//return boolean when input is false
	else
		return false;

}
void quiz()
{
	int guess; int number1, number2, answer;
	bool flag = true;
	do
	{
		//call function generateQuestionAndAnswer
		if (flag){
			answer = generateQuestionAndAnswer(number1, number2);
			cout << "How much is the remainder of " << number1 <<
				" divided by " << number2 << "?" << endl;
		}

		//input from user
		cout << "Enter your answer (-1 to exit): ";
		cin >> guess;

		//sentinel value for end program
		if (guess == -1)
			break;

		//call function answerCorrect
		flag = answerCorrect(guess, answer);
		if (!flag)
			cout << "No. Please try again." << endl;
		else
			cout << "Very good!" << endl;
	} while (guess != -1);
}
int main()
{
	srand((unsigned int)time(NULL));

	//call function quiz
	quiz();
	system("pause");
	return 0;
}