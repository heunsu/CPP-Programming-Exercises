#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("�����", "��", rand() % w, rand() % h));
	game.add(new Vampire("������", "��", rand() % w, rand() % h));
	game.add(new KGhost("����õ", "��", rand() % w, rand() % h));
	game.add(new Jiangshi("����ȯ", "��", rand() % w, rand() % h, true));
	game.add(new Jiangshi("������", "��", rand() % w, rand() % h, false));
	game.add(new Human("�ڼ���", "��", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------���� ����-------------------\n");
	getchar();
	getchar();
}