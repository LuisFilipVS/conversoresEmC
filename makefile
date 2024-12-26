all: unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o Unidadeconversor_area.o unidadesInformacao.o
	gcc unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o Unidadeconversor_area.o unidadesInformacao.o main.c -o main
	del *.o
	.\main

unidadesTemperatura.o: conversoes.h
	gcc -c unidadesTemperatura.c

unidadesVelocidade.o: conversoes.h
	gcc -c unidadesVelocidade.c

unidadesMassa.o: conversoes.h
	gcc -c unidadesMassa.c

unidadesComprimento.o: conversoes.h
	gcc -c unidadesComprimento.c

Unidadeconversor_area.o: conversoes.h
	gcc -c Unidadeconversor_area.c

unidadesInformacao.o: conversoes.h
	gcc -c unidadesInformacao.c



