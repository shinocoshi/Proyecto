LIBS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer
INCLUDE_PATH = -Iinclude

SRCS = src/main.cpp src/SimpsonOneThird.cpp src/Function.cpp src/UserFunction.cpp src/InputOutput.cpp
EXE = bin/PROYECTO

# Crear el directorio bin si no existe
$(shell mkdir -p bin)

# Regla para construir el ejecutable
$(EXE): $(SRCS)
	g++ $(SRCS) -o $@ $(INCLUDE_PATH) $(LIBS)

# Regla para ejecutar el programa
run: $(EXE)
	./$(EXE)