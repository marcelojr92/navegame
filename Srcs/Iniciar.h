#ifndef INICIAR_H
#define INICIAR_H

SDL_Surface* janela; 

SDL_Joystick* controle;

void Iniciar();

void Iniciar()
{
	srand(time(NULL));

	jogando = true;
	b_iniciar = true;
	
	estado = FASE1;

	//putenv("SDL_VIDEO_WINDOW_POS=100,100");
	//SetWindowPos 
	putenv("SDL_VIDEO_CENTERED=1");
	//putz, eu lembro q tem outor jeito de fazer isso... assim depende do o.s.


	if(SDL_Init(SDL_INIT_VIDEO)<0)
	{
		printf("Erro SDL_INIT_VIDEO\n");
	}
	else 
	{
		printf("OK SDL_INIT_VIDEO\n");
	}

	
	janela = SDL_SetVideoMode(LARGURA, ALTURA, CORES, PARAMETROS);
	if(janela)
	{
		printf("OK janela\n");
	}
	else
	{
		printf("Erro janela\n");
	}

	SDL_WM_SetCaption(nome, NULL);
	SDL_ShowCursor(SDL_ENABLE);
	SDL_WM_GrabInput(SDL_GRAB_ON); 

	controle = SDL_JoystickOpen(1);

	Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 512);

	tela_cheia = false;
	carregado = false;

	temporizador = SDL_GetTicks();

	TTF_Init();
}



#endif
