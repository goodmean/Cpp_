#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {

	// clock_t : ���� �ð� üũ

	float prev = (float)clock() / CLOCKS_PER_SEC;

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
	
		prev = curr;
		
		printf("%.3f\n", curr);

		bool left = keyState('a');

		if (left) {
			// �������� ��� �̵�

		}
		else {
			// ��� ��� ��������
		}

		// ȭ�� ���
		// ���� ���� �Ǻ� 
	}

	return 0;
}