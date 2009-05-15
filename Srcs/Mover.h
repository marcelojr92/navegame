#ifndef MOVER_H
#define MOVER_H

void Mover();

void Mover()
{
	switch(estado)
	{
	case FASE1:
		if  (cima)
		{
			Nave.posicao.y-=10;
		}
		if (baixo)
		{
			Nave.posicao.y+=10;
		}
		if (esquerda)
		{
			Nave.posicao.x-=10;
		}
		if (direita)
		{
			Nave.posicao.x+=10;
		}
	break;
	}
	
}

#endif
