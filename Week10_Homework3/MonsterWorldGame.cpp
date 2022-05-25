#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("김경덕좀비", "◎", rand() % w, rand() % h));
	game.add(new Vampire("박진형박쥐", "★", rand() % w, rand() % h));
	game.add(new KGhost("강성준귀신", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("이근욱강시", "↔", rand() % w, rand() % h, true));
	game.add(new Jiangshi("김동언강시", "↕", rand() % w, rand() % h, false));
	game.add(new Tuman("최정민귀신", "좌", rand() % w, rand() % h));
	game.add(new Tuman("난그냥귀신", "우", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------게임 종료-------------------\n");
	getchar();
	getchar();
}