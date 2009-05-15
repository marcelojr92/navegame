#ifndef DESENHAR_H
#define DESENHAR_H

//incluir interface pra texto
#include "Interface.h"

void Desenhar();
void Desenhar()
{
	SDL_FillRect(janela,NULL,0x000000);
	switch(estado)
	{
	case CARREGANDO:
		break;
	case INTRODUCAO:
		
		break;
	case CONTROLES:
		
		break;

	case MENU:
	
		break;
	case CREDITOS:
	
		break;
	case FASE1:
		SDL_BlitSurface(Fase1.frente.imagem, &Fase1.frente.quadro, janela, &Fase1.frente.posicao);
		SDL_BlitSurface(Nave.imagem, &Nave.quadro, janela, &Nave.posicao);
		for(int i=0 ; i<QTD_TIROS;i++)
		{
			if(Tiro[i].visivel)
			{
				SDL_BlitSurface (Tiro[i].imagem,NULL,janela,&Tiro[i].posicao);
			}
		}
		//desenharInterface();

		break;
	case PAUSA:
		//SDL_BlitSurface(Pausa.frente.imagem, &Pausa.frente.quadro, janela, &Pausa.frente.posicao);
		break;
	case FASE2:
		break;
	case GAMEOVER: 
		
		break;
	case THE_END:
		
		break;
	}
	SDL_Flip(janela);
}			
#endif