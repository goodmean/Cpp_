#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {
	srand(time(0)); // �������� ���ο� ����� �����

	// clock_t : ���� �ð� üũ

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();
	gameEngine->init();
	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
	
		prev = curr;
		
		//printf("%.3f\n", curr);

		bool left = keyState('a');
		bool right = keyState('d');
		bool down = keyState('s');
		bool rotate = keyState('w');

		if (left) {
			// �������� ��� �̵�(a�� ���������϶� ������ ���ǽ� ����)
			gameEngine->next(dt, 'a');
		}
		else if (right) {
			gameEngine->next(dt, 'd');
		}
		else if (down) {
			gameEngine->next(dt, 's');
		}
		else if (rotate) {
			// TODO : ȸ��
			gameEngine->rotate(dt, 'w');
		}
		else {
			// ��� ��� ��������
			gameEngine->next(dt, 0);
		}
		
		// ȭ�� ���
		gameEngine->makeDisplayData();
		display->draw();

		if (gameEngine->state == GameEngine::GameState::GAMEOVER) {
			break;
		}

		// ���� ���� �Ǻ� 
	}

	return 0;
}