#ifndef COLIDIR_H
#define COLIDIR_H

//exemplo de uso:
//if (ColidiuCorPreta(Fundo_Colisao.fundo, Heroi.rectfor.x + Heroi.rectfor.w/2 + Colisao.rectfrom.x,  Heroi.rectfor.y + Heroi.rectfor.h + 0) == true) 

bool ColidiuCorPreta (SDL_Surface *surface, int x, int y);

bool ColidiuCorPreta (SDL_Surface *surface, int x, int y)
{
	SDL_PixelFormat* fmt;
	SDL_Color Cor;
	Uint8* index;
	Uint32 col = 0 ;							
	fmt = surface->format;

	if(fmt->BitsPerPixel!=8)
	{
	  fprintf(stderr, "Not an 8-bit surface.\n");
	}
	else
	{
		SDL_LockSurface(surface);
		index = (Uint8 *)surface->pixels + y * surface->pitch + x;
		memcpy ( &col , index , surface->format->BytesPerPixel ) ;
		SDL_GetRGB ( col , surface->format , &Cor.r , &Cor.g , &Cor.b ) ;
		SDL_UnlockSurface(surface);

//			printf("Cor do pixel = Red: %d, Green: %d, Blue: %d. Posicao = X: %d, Y: %d, INDEX: %d\n",
//				  Cor.r, Cor.g, Cor.b, x, y, index);

	}
		if (Cor.r == 0 & Cor.g == 0 & Cor.b == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}

}

bool ColidiuCorAmarelo (SDL_Surface *surface, int x, int y);

bool ColidiuCorAmarelo (SDL_Surface *surface, int x, int y)
{
	SDL_PixelFormat* fmt;
	SDL_Color Cor;
	Uint8* index;
	Uint32 col = 0 ;

	fmt = surface->format;

	if(fmt->BitsPerPixel!=8)
	{
	  fprintf(stderr, "Not an 8-bit surface.\n");
	}
	else
	{
		SDL_LockSurface(surface);
		index = (Uint8 *)surface->pixels + y * surface->pitch + x;
		memcpy ( &col , index , surface->format->BytesPerPixel ) ;
		SDL_GetRGB ( col , surface->format , &Cor.r , &Cor.g , &Cor.b ) ;
		SDL_UnlockSurface(surface);

//			printf("Cor do pixel = Red: %d, Green: %d, Blue: %d. Posicao = X: %d, Y: %d, INDEX: %d\n",
//				  Cor.r, Cor.g, Cor.b, x, y, index);

	}
		if (Cor.r == 255 & Cor.g == 255 & Cor.b == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
}

bool ColidiuCorVerde (SDL_Surface *surface, int x, int y);

bool ColidiuCorVerde (SDL_Surface *surface, int x, int y)
{
	SDL_PixelFormat* fmt;
	SDL_Color Cor;
	Uint8* index;
	Uint32 col = 0 ;

	fmt = surface->format;

	if(fmt->BitsPerPixel!=8)
	{
	  fprintf(stderr, "Not an 8-bit surface.\n");
	}
	else
	{
		SDL_LockSurface(surface);
		index = (Uint8 *)surface->pixels + y * surface->pitch + x;
		memcpy ( &col , index , surface->format->BytesPerPixel ) ;
		SDL_GetRGB ( col , surface->format , &Cor.r , &Cor.g , &Cor.b ) ;
		SDL_UnlockSurface(surface);

//			printf("Cor do pixel = Red: %d, Green: %d, Blue: %d. Posicao = X: %d, Y: %d, INDEX: %d\n",
//				  Cor.r, Cor.g, Cor.b, x, y, index);

	}
		if (Cor.r == 0 & Cor.g == 255 & Cor.b == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
}


bool Colidiu (SDL_Rect object1, SDL_Rect object2);

bool Colidiu (SDL_Rect object1, SDL_Rect object2) 

{
	int left1, left2;

    int right1, right2;

    int top1, top2;

    int bottom1, bottom2;
 
    left1   = object1.x;

    left2   = object2.x;

    right1  = object1.x + object1.w;

    right2  = object2.x + object2.w;

    top1    = object1.y;

    top2    = object2.y;

    bottom1 = object1.y + object1.h;

    bottom2 = object2.y + object2.h;

    if (bottom1 < top2) return(false);        // 1

    if (top1 > bottom2) return(false);        // 2

    if (right1 < left2) return(false);        // 3

    if (left1 > right2) return(false);        // 4

    return(true);

}

void Colidir();

void Colidir()
{
	/*for (int i=0; i<QTD_ESPADA; i++)
	{
		if (ColidiuCorPreta(Fase1.colisao.imagem, Espada[i].posicao.x + Espada[i].quadro.w/2 + Fase1.colisao.quadro.x,  Espada[i].posicao.y + Espada[i].quadro.h-10 + Fase1.colisao.quadro.y)) 
		{
			if(Espada[i].posicao.y<Fase1.frente.quadro.h/2)
			{
				Espada[i].posicao.y+=Espada[i].velocidade;
			}
			else
			{
				Espada[i].posicao.y-=Espada[i].velocidade;
			}
		}
	}*/
}
#endif

	
