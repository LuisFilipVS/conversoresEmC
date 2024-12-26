all: unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o unidadesArea.o unidadesVolume.o unidadesInformacao.o
	gcc unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o unidadesArea.o unidadesVolume.o unidadesInformacao.o main.c -o main
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

unidadesArea.o: conversoes.h
	gcc -c unidadesArea.c

unidadesInformacao.o: conversoes.h
	gcc -c unidadesInformacao.c

unidadesVolume.o: conversoes.h
	gcc -c unidadesVolume.c


