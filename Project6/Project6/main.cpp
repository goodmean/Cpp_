#include "Header.h"
#define true 1

int main() {
	
	Employee* employee[100];
	int count = 0; // ����� ����� �ִ��� ���

	while (true) {
		printf("���ɾ �Է��ϼ���\n");
		printf("1. ��� ����\n");
		printf("2. ��� �߰�\n");
		printf("3. ��� ����\n");
		printf("4. ���α׷� ����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
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