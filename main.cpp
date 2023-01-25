#include <iostream>

enum class months {
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

int main(int argc, char** argv) {
	int val = 13;
	setlocale(LC_ALL, "Russian");

	do {
		std::cout << "Enter month's number: ";
		std::cin >> val;

		switch (val) {
		case 0: 
			std::cout << "Good bye" << std::endl;
			break;
		case 1:
			std::cout << "january" << std::endl;
			break;
		case 2:
			std::cout << "february" << std::endl;
			break;
		case 3:
			std::cout << "march" << std::endl;
			break;
		case 4:
			std::cout << "april" << std::endl;
			break;
		case 5:
			std::cout << "may" << std::endl;
			break;
		case 6:
			std::cout << "june" << std::endl;
			break;
		case 7:
			std::cout << "july" << std::endl;
			break;
		case 8:
			std::cout << "august" << std::endl;
			break;
		case 9:
			std::cout << "september" << std::endl;
			break;
		case 10:
			std::cout << "october" << std::endl;
			break;
		case 11:
			std::cout << "november" << std::endl;
			break;
		case 12:
			std::cout << "december" << std::endl; 
			break;
		default:
			std::cout << "Wrong number!" << std::endl;
			break;
		}
	} while (val != 0);

	return 0;
}