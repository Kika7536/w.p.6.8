#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int height = 0, width = 0, chars = 1, space;

	//������ ������ ������

	while (true) {
		cout << "������� ������ ������: ";
		cin >> height;
		if (height < 1) {
			cout << "������! ������ ������ �� ����� ���� ������ 1 �������. ��������� �������." << endl;
		}
		else {
			break;
		}
	}


	//������� ����� ������ ����� �������� 
	for (int i = 1; i < height; i++) {
		width += 2;
	}
	space = width / 2;

	//������

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

	//���������� � ����� ����� �������� �� ������� ��� ��������������� �����, �� �������� ����� ���������� � ��� ���������� ��� �����
}