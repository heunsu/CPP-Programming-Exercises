#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("김흔수", "◎", rand() % w, rand() % h));
	game.add(new Vampire("강인재", "★", rand() % w, rand() % h));
	game.add(new KGhost("강기천", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("서지환", "↔", rand() % w, rand() % h, true));
	game.add(new Jiangshi("정현수", "↕", rand() % w, rand() % h, false));
	game.add(new Human("박수빈", "♀", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------게임 종료-------------------\n");
	getchar();
	getchar();
}