# Defaults
CXX     = g++
DEBUG   = 1
STATIC  = 0

LDFLAGS =
CXXFLAGS =\
	-Wno-padded \
	-Wno-disabled-macro-expansion \
	-pedantic

# Sources / Results
SRC =\
	src/main.cpp \
	src/carti_de_joc.cpp 
LIBDIR =
LIB =\
	stdc++

INCDIR =\
	src/project/

OUT = project

# Conditionals / Appends
LDFLAGS +=\
	$(addprefix -L,${LIBDIR})\
	$(addprefix -l,${LIB})

CXXFLAGS +=\
	$(addprefix -I,${INCDIR})

ifeq (${DEBUG},1)
CXXFLAGS += -g
else
CXXFLAGS += -O2 -Werror
endif

ifeq (${STATIC},1)
LDFLAGS += -static
endif
