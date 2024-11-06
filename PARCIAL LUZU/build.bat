

g++ -std=c++17 -Wall -I./include -c ./src/Cliente.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Empleado.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Equipo.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Pedido.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Cliente.o Empleado.o Pedido.o Equipo.o main.o -o Parcial.exe

parcial.exe
del *.o