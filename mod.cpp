#include <iostream>
int main()
{
        //number1 değişkenine 5 değerini atar
	int number1 {5};
        // önce bir azaltır sonra ekrana yazar
	std::cout << --number1 << "\n"; // ekrana 4 yazar
        // önce bir artırır sonra ekrana yazar
	std::cout << ++number1 << "\n"; // ekrana 5 yazar
        // önce ekrana yazar sonra bir artırır
	std::cout << number1++ << "\n"; // ekrana 5 yazar
        // önce ekrana yazar sonra bir azaltır
	std::cout << number1-- << "\n"; // ekrana 6 yazar
	std::cout << number1; // ekrana 5 yazar
	return 0;
}
