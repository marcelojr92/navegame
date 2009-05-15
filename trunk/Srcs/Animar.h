#ifndef ANIMAR_H
#define ANIMAR_H

void Animar();

void Animar()
{
	switch(estado)
	{
	case FASE1:
		/*if (personagem.movendo_direita)
		{
			if (SDL_GetTicks()>personagem.tempo_movendo_direita)
			{
				personagem.quadro.x = personagem.quadro.w * personagem.tela_movendo_direita;
				personagem.quadro.y = 66;
				personagem.tempo_movendo_direita = SDL_GetTicks() + personagem.qtd_tempo_movendo_direita;
				personagem.tela_movendo_direita++;
				if (personagem.tela_movendo_direita >= personagem.qtd_telas_movendo_direita) 
				{
					personagem.tela_movendo_direita = 0;
				}
			
			}
		}*/
		
		break;
	}
}

#endif

/*

  		if(Heroi.animandoataque1)
	{
		if (SDL_GetTicks() > Heroi.tempoAtaque)
		{
			Heroi.rectfrom.x = Heroi.rectfrom.w * Heroi.frameatual;
			Heroi.tempoAtaque = SDL_GetTicks() + Heroi.frequencia;
			Heroi.frames = 8;
			Heroi.frameatual++;
			if (Heroi.frameatual > Heroi.frames)
			{
				Heroi.frameatual = 0; 
				Heroi.rectfrom.x = Heroi.rectfrom.w * Heroi.frameatual;
				Heroi.animandoataque1=false;
				//Heroi.animandoparado = true;
			}
			
		}
	}
	
	if(Heroi.animandoesquerda)
	{
		if (SDL_GetTicks() > Heroi.tempo)
		{
			Heroi.rectfrom.y = 66;
			Heroi.frames = 4;
			Heroi.frameatual++;
			if (Heroi.frameatual >= Heroi.frames) Heroi.frameatual = 0;
			Heroi.rectfrom.x = Heroi.rectfrom.w * Heroi.frameatual;
			Heroi.tempo = SDL_GetTicks() + Heroi.frequencia;
		}

	}



*/