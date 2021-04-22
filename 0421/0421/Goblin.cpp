#include "GHeader.h"

class FantasyUnit {
public:
	int maxHp;
	int atk;
	int range;
	int movementSpeed;
};

class Goblin : public FantasyUnit {
public:
	Goblin() {
		maxHp = 10;
		atk = 5;
		range = 10;
		movementSpeed = 10;
	}
};