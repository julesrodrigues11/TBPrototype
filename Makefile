CXX = g++
CXXFLAGS = -g
EXEC = bin/game
OBJS = BattleSystem.o Game.o Unit.o main.o

${EXEC} : ${OBJS}
		mkdir bin
		${CXX} ${CXXFLAGS} -o ${EXEC} ${OBJS}

Unit.o: Unit.cpp Unit.hpp
	${CXX} ${CXXFLAGS} -c Unit.cpp

BattleSystem.o: BattleSystem.cpp BattleSystem.hpp
	${CXX} ${CXXFLAGS} -c BattleSystem.cpp

Game.o: Game.cpp Game.hpp
	${CXX} ${CXXFLAGS} -c Game.cpp

main.o: main.cpp Game.hpp
	${CXX} ${CXXFLAGS} -c main.cpp

clean:
	rm -f ${EXEC} ${OBJS}
	rmdir bin