#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {

	// clock_t : 현재 시간 체크

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
	
		prev = curr;
		
		//printf("%.3f\n", curr);

		bool left = keyState('a');

		if (left) {
			// 왼쪽으로 블록 이동(a가 눌린상태일때 참으로 조건식 만족)

		}
		else {
			// 블록 계속 떨어지게
		}

		// 화면 출력
		display->draw();

		// 게임 상태 판별 
	}

	return 0;
}