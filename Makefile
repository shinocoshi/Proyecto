bin/main : src/main.cpp include/*.hpp
	c++ src/main.cpp -o bin/ejecutable -I include -l curses

# ejecutar
run : bin/ejecutable
	./bin/ejecutable

