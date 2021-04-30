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
		{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{0, 1, 1},
		{0, 0, 1},
		{0, 0, 1}
	};
	int blockX = 0;
	int blockY = 0;

	float elapsed = 0.0f;

	void init() {
		// ���ʿ� ���ӿ����� �ʱ�ȭ �ϴ� ����
	}

	void next(float dt, char keyboardInput) {
		// Ű���� �Է°��� �޾ƿͼ� � ���� �� �� ����(while �������� �Ź� �ҷ�����)
		//blockY++;
		elapsed = elapsed + dt; // elapsed += dt;
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else { // �� ������ �� ������ userBlock�� gameGridData�� ����
				trans();
			}

			elapsed = elapsed - 0.5f; // elapsed -= dt;
		}

		if (keyboardInput == 'a') {
			blockX--;
		}
		if (keyboardInput == 'd') {
			blockX++;
		}
	}

	bool canGoDown() {
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

	bool canGoLeft() {
		return true;
	}

	bool canGoRight() {
		return true;
	}

	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				gameGridData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[i + blockY][k + blockX];
			}
		}

		// TODO : ������ ���� �� �ִ��� Ȯ��
		// 
		// ���ο� ��� ����
		makeUserBlock();
	}

	void makeUserBlock() {
		blockX = 0;
		blockY = 0;

		// TODO : ���ο� ����� �����
	}


	void makeDisplayData() { // ���� ���� �����͸� ȭ�鿡 ����� �� �ִ� �����ͷ� �ٲ��ش�.
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