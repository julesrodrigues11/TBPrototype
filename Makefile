CXX = g++
CXXFLAGS = -g
EXEC = bin/game
OBJS = BattleSystem.o Game.o Unit.o main.o

vpath %.cpp /src
vpath %.hpp /include

all : ${EXEC}
.PHONY : clean

${EXEC} : ${OBJS}
		${CXX} ${CXXFLAGS} -o ${EXEC} ${OBJS}

Unit.o: src/Unit.cpp src/include/Unit.hpp
	${CXX} ${CXXFLAGS} -c src/Unit.cpp

BattleSystem.o: src/BattleSystem.cpp src/include/BattleSystem.hpp
	${CXX} ${CXXFLAGS} -c src/BattleSystem.cpp

Game.o: src/Game.cpp src/include/Game.hpp
	${CXX} ${CXXFLAGS} -c src/Game.cpp

main.o: src/main.cpp src/include/Game.hpp
	${CXX} ${CXXFLAGS} -c src/main.cpp

clean:
	rm -f ${EXEC} ${OBJS}
