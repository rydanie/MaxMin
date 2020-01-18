// Arrays to find the highest, lowest and average number
#include<iostream>
using namespace std;
//Function prototype
void calculate();  //Function To calculate

int main()
{

	int choice = 0;
	do
	{
		system("CLS");
		cout << "Arrays" << endl;
		cout << "1. Calculate Highest/Lowest/Average"<<endl;
		cout << "2. Exit" << endl;

		while (!(cin >> choice) || (choice < 1 || choice > 2))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter 1 or 2: ";
		}
		// Process the user's choice
		if (choice == 1)
		{
			calculate();
		}

	} while (choice != 2);

		//End Program
		cout << "\n\nEnter to END ";
		cin.get(); cin.get();
		return 0;
}

void calculate()
{
	const int SIZE = 5;
	double numbers[SIZE];
	double highest = 0.0, lowest = 0.0, total = 0.0, number = 0.0, average = 0.0;
	int count;

	system("CLS");
	//Enter Numbers into Array
	cout << "Enter 5 Numbers\n\n";
	for (count = 0; count < SIZE; count++)
	{
		cout << "Enter a Number ";
		while ((!(cin >> number))) {
			cout << "That's not a number\n ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		numbers[count] = number;
	}

	//Find the Highest Number
	highest = numbers[0];
	for (count = 0; count < SIZE; count++)
	{
		if (numbers[count] > highest)
			highest = numbers[count];
	}
	cout << "\nHighest " << highest << endl;

	//Find the lowest number
	lowest = numbers[0];
	for (count = 0; count < SIZE; count++)
	{
		if (numbers[count] < lowest)
			lowest = numbers[count];
	}
	cout << "\nLowest " << lowest << endl;

	//Find the Average Number
	total = 0;
	number = 0;
	for (count = 0; count < SIZE; count++)
	{
		total += numbers[count];
		number++;
	}

	average = (total / (number));

	cout << "\nAverage " << average << endl;
	cout << "\nEnter to continue ";
	cin.get(); cin.get();
}

