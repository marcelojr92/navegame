#ifndef INTERFACE_H
#define INTERFACE_H

char st[10];

void desenharTexto(char *str, int x, int y, int r, int g, int b, TTF_Font * fonte);//fonte?

void desenharTexto(char *str, int x, int y, int r, int g, int b, TTF_Font * fonte)
{
	SDL_Surface *surf;
	SDL_Rect dest;
	SDL_Color color;	

	color.r = r;
	color.g = g;
	color.b = b;

	surf = TTF_RenderText_Solid(fonte, str, color);

	dest.x = x;
	dest.y = y;
	dest.w = janela->w;
	dest.h = janela->h;	

	SDL_BlitSurface(surf, 0, janela, &dest);

	SDL_FreeSurface(surf);
}

void desenharInterface();

void desenharInterface()
{
	//SDL_BlitSurface(gui.imagem, &gui.quadro, janela, &gui.posicao);
	//itoa (Ouro, st, 10);
	//desenharTexto(st, 140,112, 255, 255, 255, unicorn32);	
}


#endif