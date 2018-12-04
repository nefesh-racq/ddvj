# compilacion del programa
OBJETS = Figura.o
BINARY = main

main: Figura.o
	g++ $(OBJETS) main.cpp -o $(BINARY)

Figura.o: Figura.cpp Figura.h
	g++ -Iheaders -c Figura.cpp

clean:
	rm -f $(BINARY) $(OBJETS)
