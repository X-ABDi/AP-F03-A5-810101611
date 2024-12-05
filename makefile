CC = g++
STD = -std=c++20
INCL1 = -I/usr/local/include/SFML
INCL2 = -I/usr/local/include/SFML/Audio
FLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
TARGET = SheepFight
SRCS = main.cpp runner.cpp player.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(STD) -o $(TARGET) $(OBJS) $(FLAGS)

%.o: %.cpp
	$(CC) $(STD) $(INCL1) $(INCL2) -c $< -o $@
