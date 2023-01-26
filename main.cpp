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

void print(months month) {
	switch (month) {
	case months::january:
		std::cout << "january" << std::endl;
		break;
	case months::february:
		std::cout << "february" << std::endl;
		break;
	case months::march:
		std::cout << "march" << std::endl;
		break;
	case months::april:
		std::cout << "april" << std::endl;
		break;
	case months::may:
		std::cout << "may" << std::endl;
		break;
	case months::june:
		std::cout << "june" << std::endl;
		break;
	case months::july:
		std::cout << "july" << std::endl;
		break;
	case months::august:
		std::cout << "august" << std::endl;
		break;
	case months::september:
		std::cout << "september" << std::endl;
		break;
	case months::october:
		std::cout << "october" << std::endl;
		break;
	case months::november:
		std::cout << "november" << std::endl;
		break;
	case months::december:
		std::cout << "december" << std::endl;
		break;
	default:
		break;
	}
}

int main(int argc, char** argv) {
	int month = 13;

	do {
		std::cout << "Enter month's number: ";
		std::cin >> month;
		if (month < 0 || month > 12) {
			std::cout << "Wrong number!" << std::endl;
			continue;
		}
		print(static_cast<months>(month));
		
	} while (month != 0);

	return 0;
}