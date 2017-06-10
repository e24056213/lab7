tetris5: tetris5.o Mino.o MinoI.o MinoS.o MinoA.o MinoB.o genMino.o 
	g++ -o tetris5 tetris5.o Mino.o MinoI.o MinoS.o MinoA.o MinoB.o genMino.o

Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoI.o: MinoI.h MinoI.cpp
	g++ -c MinoI.cpp

MinoS.o: MinoS.h MinoS.cpp
	g++ -c MinoS.cpp

MinoA.o: MinoA.h MinoA.cpp
	g++ -c MinoA.cpp

MinoB.o: MinoB.h MinoB.cpp
	g++ -c MinoB.cpp

genMino.o: genMino.h genMino.cpp
	g++ -c genMino.cpp

tetris5.o: tetris5.cpp
	g++ -c tetris5.cpp

clean: 
	rm tetris5 *.o


