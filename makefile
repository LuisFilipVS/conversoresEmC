all: unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o
	gcc unidadesTemperatura.o unidadesVelocidade.o unidadesMassa.o unidadesComprimento.o main.c -o main
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


