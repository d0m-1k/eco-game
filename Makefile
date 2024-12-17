# Установка компилятора и флагов
CXX := g++
CXXFLAGS := -std=c++17 -Wall -I /usr/include/SFML

# Название проекта
TARGET := build/game

# Исходные файлы
SRCS := src/main.cpp src/Game.cpp src/Player.cpp src/Trash.cpp

# Объектные файлы (путь к .o файлам)
OBJS := $(SRCS:.cpp=.o)

# Линкерные флаги для SFML
LDFLAGS := -lsfml-graphics -lsfml-window -lsfml-system

# Правило по умолчанию для сборки
all: $(TARGET)

# Линковка объектов
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

# Компиляция исходников
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Очистка для повторной сборки
clean:
	rm -f $(OBJS) $(TARGET)

# Запуск игры
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
