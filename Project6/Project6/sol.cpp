#include "Header.h"
#define true 1

int main() {
	
	while (true) {
		printf("1.");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; ) {

			}
		}
		else if (input == 2) {
			//����߰�
			char* name = getString("������� �Է����ּ��� : ");
			int gender = getInt("������ �Է����ּ��� : ");
			char* rank = getString("������ �Է����ּ��� : ");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank; // �������� �Ҵ�� ���� ����

			employee[count] = e; // ���
			count++;
		}
		else if (input == 3) {

		}
		else if (input == 4) {
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else {
			printf("�ùٸ��� ���� �Է��Դϴ�.");
		}
	}

	return 0;
}

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", &input); // 99�� ���ڸ� �޾Ƽ� ��Ʈ������ input�� ����
	return input;
}