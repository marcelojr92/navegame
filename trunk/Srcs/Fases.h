#ifndef FASES_H
#define FASES_H

class Tela
{

public:

	SDL_Surface* imagem; 
	SDL_Rect quadro, posicao;
	bool visivel;
};

class Fase
{

public:

	Tela fundo;
	Tela frente;
	Tela colisao;
	Mix_Music* musica;
	bool tocando_musica;
};

Fase Introducao;
Fase Carregando;
Fase Menu;
Fase Creditos;
Fase Fase1;
Fase Fase2;
Fase Final;
Fase Pausa;
Fase Controles;
Fase GameOver;
Fase TheEnd;


#endif
