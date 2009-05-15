#ifndef ITENS_H
#define ITENS_H

class Item

{
public:

	SDL_Surface* imagem; 
	SDL_Rect quadro, posicao;
	Mix_Chunk* efeito;
	

	int hp;
	int mp;
	int xp;
	int lvl;
	int atk;
	int def;

	char Nome[10];

};


#endif




