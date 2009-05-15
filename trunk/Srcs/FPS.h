#ifndef FPS_H
#define FPS_H

double tempo_atual = 0;
double tempo_anterior = 0;
double delta_t = 0;
double fps_atual = 0;
double fps_ideal = 30;
double delta_fps = 0;
double tempo_correcao = 0;

void FPS();

void FPS()
{
	tempo_atual = SDL_GetTicks()/1000.0;

	delta_t = tempo_atual - tempo_anterior;

	//printf("tempo_atual = %.2f tempo_anterior = %.2f delta_t = %.2f fps_atual: %.2f fps_ideal: %.2f delta_fps: %.2f tempo_correcao = %.2f \n", tempo_atual, tempo_anterior, delta_t, fps_atual, fps_ideal, delta_fps, tempo_correcao);

	tempo_anterior = tempo_atual;

	fps_atual = 1 / delta_t;

	if (fps_atual>fps_ideal)
	{
		delta_fps = fps_atual - fps_ideal;

		tempo_correcao = delta_fps * delta_t * 1000 / 30;

		//tempo_correcao = 1/delta_t;//média...

		SDL_Delay(tempo_correcao);
	}	
}

#endif

/*
FPS()
{
	static float FPS = 0.0f,
				 inicio = 0.0f;

	float atual = SDL_GetTicks()/1000.0f;

	static int resultado = 0;

	FPS++;

	if (atual - inicio > 1.0f)
	{
		resultado = FPS;
		inicio = atual;
		FPS = 0;
	}

	printf("FPS = %d\n", resultado);

	return resultado;
}

float Passo(int FPS, float unidades);

float Passo(int FPS, float unidades)
{
	return unidades/(float)FPS;
}

#endif

/*
float interval = 0.0f;

int FPS();

int FPS()
{
	//SDL_Delay(0);
	static int fps = 0;						
    static float previousTime  = 0.0f;		
	static float frameTime = 0.0f;
	static char strFPS[100];

    fps++;
    	
	float currentTime = (SDL_GetTicks() * 0.001f);				

	interval = currentTime - frameTime;
	frameTime = currentTime;



    if( currentTime - previousTime >= 1.0f )
    {
		//sprintf(strFPS, "%s (%d fps)", "", fps);
		sprintf(strFPS, "Fps: %d  Interval: %f", fps, interval);
		SDL_WM_SetCaption(strFPS, NULL);

		

        previousTime = currentTime;
        fps = 0;
    }

	return fps;
}

*/

