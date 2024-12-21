all: unidadesTemperatura.o unidadesVelocidade.o
	gcc unidadesTemperatura.o unidadesVelocidade.o main.c -o main
	del *.o
	.\main

unidadesTemperatura.o: conversoes.h
	gcc -c unidadesTemperatura.c

unidadesVelocidade.o: conversoes.h
	gcc -c unidadesVelocidade.c



