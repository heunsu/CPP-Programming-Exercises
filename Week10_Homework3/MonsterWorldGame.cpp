#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("��������", "��", rand() % w, rand() % h));
	game.add(new Vampire("����������", "��", rand() % w, rand() % h));
	game.add(new KGhost("�����رͽ�", "��", rand() % w, rand() % h));
	game.add(new Jiangshi("�̱ٿ���", "��", rand() % w, rand() % h, true));
	game.add(new Jiangshi("�赿�𰭽�", "��", rand() % w, rand() % h, false));
	game.add(new Tuman("�����αͽ�", "��", rand() % w, rand() % h));
	game.add(new Tuman("���׳ɱͽ�", "��", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------���� ����-------------------\n");
	getchar();
	getchar();
}