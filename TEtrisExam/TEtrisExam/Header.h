#define _CRT_SECURE_NO_WARNINGS

#include "TetrisHelper.h"
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define GRID_WIDTH 10
#define GRID_HEIGHT 20
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	void draw() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				if (displayData[i][k] == 0) {
					drawPosition(k, i, false);
				}
				else {
					drawPosition(k, i, true);
				}
			}
		}
	}
};

//class Display
//{
//public:
//	void draw() {
//		for (int i = 0; i < GRID_HEIGHT; i++) {
//			for (int k = 0; k < GRID_WIDTH; k++) {
//				drawPosition(k, i, displayData[i][k] == 1);
//			}
//		}
//	}
//};

class GameEngine {
public:
	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = { 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{1, 1, 1, 1, 0, 1, 0, 1, 1, 0}
	};

	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{0, 0, 1},
		{0, 0, 1},
		{0, 0, 1}
	};

	int userBlockVarious[3][USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{
			{0, 0, 1},
			{0, 0, 1},
			{0, 0, 1}
		},
		{
			{0, 1, 1},
			{0, 1, 1},
			{0, 0, 0}
		},
		{
			{0, 1, 0},
			{1, 1, 0},
			{0, 0, 0}
		}
	};

	int blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
	int blockY = 0;

	float elapsed = 0.0f;
	float controlCheck = 0.0f;

	void init() {
		// 최초에 게임엔진을 초기화 하는 과정
	}

	void next(float dt, char keyboardInput) {
		// 키보드 입력값을 받아와서 어떤 일을 할 지 결정(while 루프에서 매번 불려지는)
		//blockY++;
		elapsed = elapsed + dt; // elapsed += dt;
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else { // 더 내려갈 수 없으면 userBlock을 gameGridData에 전사
				trans();
			}

			elapsed = elapsed - 0.5f; // elapsed -= dt;
		}

		controlCheck = controlCheck + dt;

		if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.1) {
			blockX--;
			controlCheck = 0.0f;
		}
		if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.1) {
			blockX++;
			controlCheck = 0.0f;
		}
		if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1) {
			blockY++;
			controlCheck = 0.0f;
		}
	}

	bool canGoDown() { // 아래로 갈 수 있니?
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && i + blockY + 1 >= GRID_HEIGHT)
					return false;

				if (userBlock[i][k] == 1 && gameGridData[i + blockY + 1][k + blockX] == 1)
					return false;
			}
			
		}
		return true;
	}

	bool canGoLeft() { // 왼쪽으로 갈 수 있니?
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && k + blockX - 1 < 0) {
					return false;
				}
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX - 1] == 1) {
					return false;
				}
			}
		}
		return true;
	}

	bool canGoRight() { // 오른쪽으로 갈 수 있니?
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && k + blockX + 1 > GRID_WIDTH - 1) {
					return false;
				}
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX + 1]) {
					return false;
				}
			}
		}
		return true;
	}

	bool isLineFilled(int y) { // 한줄이 가득 차 있는지 확인
		for (int i = 0; i < GRID_WIDTH; i++) {
			if (gameGridData[y][i] == 0) return false;
		}
		return true;
	}

	void eraseLine(int y) { // 한줄 지우기
		for (int i = 0; i < GRID_WIDTH; i++) {
			gameGridData[y][i] = 0;
		}
	}

	void drop(int y) { // 지워서 생긴 라인 공백 떙겨오기
		for (int i = y; i >= 0; i--) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				gameGridData[i][k] = i - 1 < 0 ? 0 : gameGridData[i - 1][k];
			}
		}
	}

	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				gameGridData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[i + blockY][k + blockX];
			}
		}

		for (int i = 0; i < GRID_HEIGHT; i++) {
			if (isLineFilled(i)) {
				eraseLine(i);
				drop(i);
			}
		}

		// 새로운 블록 생성
		makeUserBlock();
	}

	void makeUserBlock() {
		blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
		blockY = 0;

		// TODO : 랜덤으로 새로운 블록을 만든다
		srand(time(0));

		int various = rand() % 3;
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				userBlock[i][k] = userBlockVarious[various][i][k];
			}
		}

	}


	void makeDisplayData() { // 실제 게임 데이터를 화면에 출력할 수 있는 데이터로 바꿔준다.
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				displayData[i][k] = gameGridData[i][k];
			}

		}

		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (i + blockY < 0 || i + blockY > GRID_HEIGHT) {
					// do nothing
				}
				else if (k + blockX < 0 || k + blockX > GRID_WIDTH) {
					// do nothing
				}
				else {
					/*displayData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : displayData[i + blockY][k + blockX];*/
					int _x = k + blockX;
					int _y = i + blockY;

					displayData[_y][_x] = userBlock[i][k] | displayData[_y][_x];
				}
			}
		}
	}


};