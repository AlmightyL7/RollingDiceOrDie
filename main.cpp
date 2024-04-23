//RollingDiceOrDie
//Another Rng Program
/*
* all die's are 6 sided
User has options:
- choose to roll a die
- choose to roll dice
*/
#include <iostream>
#include <string>
#include <cmath>
#include <random>

#include <chrono> 
#include <thread>

void menu(std::string userName);
void rollDie();
void rollDice();

int main() {

	std::string userName{ "" };
	char userChoice;

	std::cout << "Hello Wrld?\n";
	std::cout << "Your Name?\n";
	std::cout << ">> ";
	
	getline(std::cin, userName);

	do {
		menu(userName);
		std::cin >> userChoice;
		if (userChoice == 'a' || userChoice == 'A') {
			rollDie();
		}
		else if (userChoice == 'b' || userChoice == 'B') {
			rollDice();
		}
		else if (userChoice == 'q' || userChoice == 'Q') {
			std::cout << "Have a Good day!!!\n";
			break;
		}
		else {
			std::cout << "Not a valid choice...\n";
			std::cout << "Try again...\n";
		}
	} while (true);

	return 0;
}

void menu(std::string userName) {
	std::cout << "\nWelcome " << userName << "!!\n\n";
	std::cout << "Rolling Dice Or Die...\n";
	//Two Choices
	std::cout << "A. Roll a die\n";
	std::cout << "B. Roll dice\n";
	std::cout << "Q. Quit\n\n";
	
	std::cout << userName << " choice\n";
	std::cout << ">> ";
}

void rollDie() {
	std::random_device device;
	std::mt19937 mt(device());
	std::uniform_real_distribution<double> r(1, 6);
	
	std::cout << "\n...\n\n";

	std::this_thread::sleep_for(std::chrono::nanoseconds(10));
	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	
	std::cout << "Die rolled a " << round(r(mt));
	
	std::this_thread::sleep_for(std::chrono::nanoseconds(10));
	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
}

void rollDice() {
	std::random_device device;
	std::mt19937 mt(device());
	std::uniform_real_distribution<double> r(2, 12);
	
	std::cout << "\n...\n\n";

	std::this_thread::sleep_for(std::chrono::nanoseconds(10));
	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));

	std::cout << "Dice rolled a " << round(r(mt));

	std::this_thread::sleep_for(std::chrono::nanoseconds(10));
	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
}
