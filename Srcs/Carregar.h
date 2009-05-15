#ifndef CARREGAR_H
#define CARREGAR_H
#include "Fases.h"
#include "Objetos.h"
#include "Personagem.h"
#include "Inimigos.h"
#include "Itens.h"


void Carregar();

void Carregar()
{
	Fase1.frente.imagem = IMG_Load("..\\Mídias\\Imagens\\fase1.jpg");
	Fase1.frente.quadro.x=0;
	Fase1.frente.quadro.y=0;
	Fase1.frente.quadro.h=Fase1.frente.imagem->h;
	Fase1.frente.quadro.w=Fase1.frente.imagem->w;
	Fase1.frente.posicao.x=0;
	Fase1.frente.posicao.y=0;

	Nave.imagem = IMG_Load("..\\Mídias\\Imagens\\nave.png");
	Nave.quadro.x=0;
	Nave.quadro.y=0;
	Nave.quadro.h=Nave.imagem->h;
	Nave.quadro.w=Nave.imagem->w;
	Nave.posicao.x=0;
	Nave.posicao.y=0;
	
for(int i=0 ; i<QTD_TIROS;i++)
	{
	Tiro[i].imagem = IMG_Load("..\\Mídia\\Imagens\\shot.png");
	Tiro[i].quadro.x=0;
	Tiro[i].quadro.y=0;
	Tiro[i].quadro.h=13;
	Tiro[i].quadro.w=13;
	Tiro[i].posicao.x=0;
	Tiro[i].posicao.y=0;
	Tiro[i].visivel= false;	
	}
}


#endif

