#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {
	srand(time(0)); // 랜덤으로 새로운 블록을 만든다

	// clock_t : 현재 시간 체크

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
			// 왼쪽으로 블록 이동(a가 눌린상태일때 참으로 조건식 만족)
			gameEngine->next(dt, 'a');
		}
		else if (right) {
			gameEngine->next(dt, 'd');
		}
		else if (down) {
			gameEngine->next(dt, 's');
		}
		else if (rotate) {
			// TODO : 회전
			gameEngine->rotate(dt, 'w');
		}
		else {
			// 블록 계속 떨어지게
			gameEngine->next(dt, 0);
		}
		
		// 화면 출력
		gameEngine->makeDisplayData();
		display->draw();

		if (gameEngine->state == GameEngine::GameState::GAMEOVER) {
			break;
		}

		// 게임 상태 판별 
	}

	return 0;
}