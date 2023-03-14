include config.mk

OBJ = ${SRC:.cpp=.o}

all: ${OBJ} ${OUT}

%.o: %.cpp
	${CXX} -o $@ -c ${CXXFLAGS} $<

clean:
	rm -f ${OBJ} ${OUT}

ifneq (${OUT},)
${OUT}: ${OBJ}
	${CXX} -o "$@" ${LDFLAGS} $^
endif

.PHONY: all clean
