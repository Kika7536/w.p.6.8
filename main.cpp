#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int height = 0, width = 0, chars = 1, space;

	//Вводим высоту елочки

	while (true) {
		cout << "Введите высоту елочки: ";
		cin >> height;
		if (height < 1) {
			cout << "Ошибка! Высота елочки не может быть меньше 1 символа. Повторите попытку." << endl;
		}
		else {
			break;
		}
	}


	//Считаем общую ширину нашей картинки 
	for (int i = 1; i < height; i++) {
		width += 2;
	}
	space = width / 2;

	//Рисуем

	for (int i = 0; i < height; i++) {
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		for (int i = 0; i < chars; i++) {
			cout << "#";
		}
		for (int i = 0; i < space; i++) {
			cout << " ";
		}
		chars += 2;
		space--;
		cout << endl;
	}

	//Изначально я хотел взять франмент из задания про восклицательные знаки, но придумал такую реализацию и она показалась мне проще
}