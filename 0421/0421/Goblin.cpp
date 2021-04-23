#include "GHeader.h"

int main() {
	FantasyUnit* units[10];

	srand(time(0));

	for (int i = 0; i < 10; i++) {
		switch (rand() % 4){
		case 0:
			units[i] = new Goblin();
			break;
		case 1:
			units[i] = new Orc();
			break;
		case 2:
			units[i] = new Slime();
			break;
		case 3:
			units[i] = new SkeletonArchor();
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		units[i]->printInfo();
	}


	return 0;
}