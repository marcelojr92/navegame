#ifndef GLOBAIS_H
#define GLOBAIS_H

#define LARGURA 1024
#define ALTURA 768
#define CORES 0
#define PARAMETROS SDL_HWSURFACE | SDL_DOUBLEBUF // SDL_FULLSCREEN
#define QTD_TIROS 50

bool jogando, b_iniciar, b_creditos, b_sair, b_recordes, tela_cheia, carregado;//

enum Estados{CARREGANDO, INTRODUCAO, MENU, CREDITOS, PAUSA, FASE1, FASE2, SAIDA, GAMEOVER, THE_END, CONTROLES};

Estados estado;

char nome[30] = "";

SDL_Rect temp;
int temporizador;
int ultimo_tiro=0;
int veltiro=5;

TTF_Font * unicorn20;


#endif


