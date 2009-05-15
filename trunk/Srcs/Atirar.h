#ifndef ATIRAR_H
#define ATIRAR_H




void Atirar()
{
	for (int i=0; i<QTD_TIROS;i++)
	{
		if (Tiro[i].direcao==1)
		{
			Tiro[i].posicao.x+=veltiro;
		}
			
	}

}

void Atacar();

void Atacar()
{
	
}

#endif
