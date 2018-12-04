# <una regla esta compuesto de objetivo, dependencias, instrucciones>
#objetivo: dependencias
#	instrucciones
#main: Circle.o Square.o Triangle.o
#	g++ Circle.o Square.o Triangle.o main.cpp -o main

#Circle.o: Circle.cpp
#	g++ -Iheaders -c Circle.cpp

#Square.o: Square.cpp
#	g++ -Iheaders -c Square.cpp

#Triangle.o: Triangle.cpp
#	g++ -Iheaders -c Triangle.cpp

#clean:
#	rm -f Circle.o Square.o Triangle.o main


OBJETS = Circle.o Square.o Triangle.o
BINARY = main

main: $(OBJETS)
	#g++ $(OBJETS) $(BINARY).cpp -o $(BINARY)
	g++ $(OBJETS) main.cpp -o $(BINARY)

Circle.o: Circle.cpp Figure.h
	g++ -Iheaders -c Circle.cpp

Square.o: Square.cpp Figure.h
	g++ -Iheaders -c Square.cpp

Triangle.o: Triangle.cpp Figure.h
	g++ -Iheaders -c Triangle.cpp

clean:
	rm -f $(BINARY) $(OBJETS)

print:
#	echo $(OBJETS)
#	echo $(BINARY)
	@echo $(OBJETS)
	@echo $(BINARY)
