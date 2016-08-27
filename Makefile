CXX = g++-5
CXXFLAGS = -std=c++14 -g -Wall -MMD -Werror=vla
EXEC = a4q2
OBJECTS = main.o Expression.o Lone.o Unary.o Binary.o
DEPENDS = ${OBJECTS=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}
	
-include ${DEPENDS}

.PHONY: clean

clean: 
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
