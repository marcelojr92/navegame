#ifndef ACOES_H
#define ACOES_H
#include "Atributos.h"

//dispara ações que serão executadas em mover, animar, etc...

void Acoes();

void Acoes()
{
	if(quit||esc)
	{
		jogando = false;
	}

	switch(estado)
	{
    case CARREGANDO:
		
		break;
	case INTRODUCAO:
		if(espaco)
		{
			estado = MENU;
			espaco = false;
		}
		break;
		
	case CONTROLES:
	break;		
	case MENU:

		if(baixo&&b_iniciar)
		{
			//Mix_PlayChannel(0, indicador.chunk, 0);
			b_iniciar = false;
			iniciar_over.visivel=false;
			b_creditos = true;
			creditos_over.visivel=true;
			baixo = false;
			indicador.posicao.x += -indicador.quadro.h ;
			indicador.posicao.y += iniciar.quadro.h;
		}
						
		if(baixo&&b_creditos)
		{
			//Mix_PlayChannel(0, indicador.chunk, 0);
			b_creditos = false;
			creditos_over.visivel=false;
			b_sair = true;
			sair_over.visivel=true;
			baixo = false;
			indicador.posicao.x += 2*indicador.quadro.h;
			indicador.posicao.y += iniciar.quadro.h;
		}

		if(cima&&b_sair)
		{
			//Mix_PlayChannel(0, indicador.chunk, 0);
			b_sair = false;
			sair_over.visivel=false;
			b_creditos = true;
			creditos_over.visivel=true;
			cima = false;
			indicador.posicao.x -= 2*indicador.quadro.h;
			indicador.posicao.y -= iniciar.quadro.h;
		}
		if(cima&&b_creditos)
		{
			//Mix_PlayChannel(0, indicador.chunk, 0);
			b_creditos = false;
			creditos_over.visivel=false;
			b_iniciar = true;
			iniciar_over.visivel=true;
			indicador.posicao.x = iniciar.posicao.x - indicador.quadro.h;
			indicador.posicao.y -= iniciar.quadro.h;
		}
					
		if(Enter||enter||espaco)
		{
			if(b_iniciar)
			{	
				estado = CONTROLES;
				espaco = false;
				Enter = false;
				enter = false;
			}
			
			if(b_creditos)
			{
				estado = CREDITOS;
				Creditos.tocando_musica=true;

			}
			if(b_sair) jogando = false;

		
		}

		if(f2)//surprise!
		{
			if(tela_cheia)
			{
				janela = SDL_SetVideoMode(LARGURA, ALTURA, CORES, PARAMETROS);
				//tela_cheia=false;
			}
			else
			{
				janela = SDL_SetVideoMode(LARGURA, ALTURA, CORES, PARAMETROS | SDL_FULLSCREEN);
				//tela_cheia=true;
			}
			tela_cheia=!tela_cheia;//ou esta linha ou as duas de cima, aqui tela cheia recebe o contrário do q era...
		}

		break;
	case CREDITOS:

		/*if(esquerda)
		{
			estado = MENU;

			Mix_HaltMusic();
		}*/

		break;
	case FASE1:
		
		if(espaco)
		{

		Tiro[ultimo_tiro].direcao=1;
		Tiro[ultimo_tiro].posicao.x=Nave.posicao.x+Nave.quadro.w-Tiro[ultimo_tiro].quadro.w/2;
		Tiro[ultimo_tiro].posicao.y=Nave.posicao.y+Nave.quadro.h/2;
		Tiro[ultimo_tiro].visivel = true;
		printf("apertei espaco");
		ultimo_tiro++;
		if(ultimo_tiro>=QTD_TIROS)
		{
			ultimo_tiro=0;
		}	
		espaco = false;
				
		}
		
		if(cima)
		{
			
		}
		else
		{

		}

		if(baixo)
		{

		}
		else
		{

		}
				
		if(direita)
		{
			
		}
		else
		{
			
		}
		if(esquerda)
		{
			
		}
		else
		{
			
		}

		if(a)
		{
			printf ("a\n");
		}

		if (s)
		{
		
		}

		if (z)
		{
			
		}

		if (x)
		{
			
		}

		if (d)
		{

		}
			
		if (c)
		{
		
		}
		else
		{
			
		}

		if (m)
		{
			estado = GAMEOVER;
		}

		if(n2)
		{
			estado = FASE2;
		}
	
		if(l)
		{
			estado = THE_END;
		}
		
		if(p)
		{
			estado = PAUSA;
			p = false;

		}
		if(f1)
		{
			f1=false;
			
		}
		if(f2)
		{
			if(tela_cheia)
			{
				janela = SDL_SetVideoMode(LARGURA, ALTURA, CORES, PARAMETROS);
				//tela_cheia=false;
			}
			else
			{
				janela = SDL_SetVideoMode(LARGURA, ALTURA, CORES, PARAMETROS | SDL_FULLSCREEN);
				//tela_cheia=true;
			}
			tela_cheia=!tela_cheia;//ou esta linha ou as duas de cima, aqui tela cheia recebe o contrário do q era...
		}
		if(f3)
		{
//			Fase1.colisao.visivel=!Fase1.colisao.visivel;
			f3=false;
		}
		if(f4)
		{
			Fase1.colisao.visivel=!Fase1.colisao.visivel;
			f4=false;
		}
		break;//do case FASE1
	case PAUSA:
		if(p)
		{
			estado = FASE1;
			//melhorar, detectar a fase anterior
			p = false;
		}
		//SDL_GetTicks()
		//temporizador2 = SDL_GetTicks();
		/*if (SDL_GetTicks()>temporizador)
		{

			temporizador = SDL_GetTicks()+1000;
			var++;
			if (var%2==0)
			{

			}

		}*/
		break;
	case THE_END:
		
		break;

	case GAMEOVER:
		
		break;
	}
}
#endif
