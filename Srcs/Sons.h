#ifndef SONS_H
#define SONS_H

#include "Fases.h"

void musicFinished()
{
estado=FASE1;
}

void Sons();

void Sons()
{
	switch(estado)
	{
	case INTRODUCAO:
		if(Introducao.tocando_musica)
		{
			/*Mix_PlayMusic(Introducao.musica, -1);
			Introducao.tocando_musica = false;
			Creditos.tocando_musica = true;
			Menu.tocando_musica = true;
			Fase1.tocando_musica = true;*/
		}
		
		break;
	case MENU:

		if(Menu.tocando_musica)
		{
			Mix_PlayMusic(Menu.musica, -1);
			Menu.tocando_musica = false;
			Creditos.tocando_musica = true;
			Fase1.tocando_musica = true;
			/*Mix_HaltMusic();
			//Mix_PlayMusic(Menu.musica, -1);
			Menu.tocando_musica = false;
			
			Creditos.tocando_musica = true;
			
			Fase1.tocando_musica = true;*/
		}
		
		break;
	case CREDITOS:
		
		if(Creditos.tocando_musica)
		{
			Mix_PlayMusic(Creditos.musica, -1);
			Creditos.tocando_musica = false;
			
			Menu.tocando_musica = true;
			
			Fase1.tocando_musica = true;
		}
		
		break;
	case FASE1:



		if(Fase1.tocando_musica)
		{
			Mix_HaltMusic();
			Mix_PlayMusic(Fase1.musica, -1);
			//Mix_SetMusicPosition(10.0);
			Fase1.tocando_musica = false;
			
			Introducao.tocando_musica = true;
			
			Creditos.tocando_musica = true;

			Fase2.tocando_musica = true;
			
			/*// skip one minute into the song, from the start
			// this assumes you are playing an MP3
			Mix_RewindMusic();
			if(Mix_SetMusicPosition(60.0)==-1) 
			{
			    printf("Mix_SetMusicPosition: %s\n", Mix_GetError());
			}*/

		}

		break;

	case GAMEOVER:

		if(GameOver.tocando_musica)
		{
			Mix_PlayMusic(GameOver.musica, 1);
			GameOver.tocando_musica = false;
			
			Introducao.tocando_musica = true;
			
			Creditos.tocando_musica = true;

			Fase1.tocando_musica = true;

			Mix_HookMusicFinished(musicFinished);//pega qd a música acaba e chama uma fç...
			//nem tudo é necessário, tem q analisar a máquina de estados e ver pra onde é possível ir depois
		}
		break;
	
	}
}
#endif