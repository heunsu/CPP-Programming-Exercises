#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("김흔수", "◎", rand() % w, rand() % h));
	game.add(new Vampire("이경주", "★", rand() % w, rand() % h));
	game.add(new KGhost("서지환", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("강기천", "↔", rand() % w, rand() % h, true));
	game.add(new Jiangshi("강인재", "↕", rand() % w, rand() % h, false));
	game.play(500, 10);
	printf("------게임 종료-------------------\n");
}