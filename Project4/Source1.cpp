#include <iostream>

struct Jogador
{
	int x, y, energia;
};

void  aplicarDano(Jogador*j, int dano)
{
	j->energia -= dano;
}

int main()
{
	Jogador j1;
	j1.x = 10;
	j1.y = 20;
	j1.energia = 100;
	aplicarDano(&j1, 30);
	std::cout << "energia de j1 : " << j1.energia << std::endl;


	return 0;
}