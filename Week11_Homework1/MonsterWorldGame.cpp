#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("허접한좀비", "◎", rand() % w, rand() % h));            //11~16
	game.add(new Vampire("뱀파이어짱", "★", rand() % w, rand() % h));
	game.add(new KGhost("어쩌다귀신", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("못먹어도고", "↔", rand() % w, rand() % h, true));
	game.add(new Jiangshi("목먹어세로", "↕", rand() % w, rand() % h, false));
	game.add(new Human("신인류", "♀", rand() % w, rand() % h));
	game.add(new Robot("로보트", "롯", rand() % w, rand() % h));
	game.play(500, 10);                                                     //17
	printf("------엔터를 누르면 게임이 종료됩니다.------\n");
	getchar();
}