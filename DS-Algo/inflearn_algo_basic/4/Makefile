TARGET = 4
SRC = $(TARGET).cpp

all : run

compile: $(SRC)
	g++ $(SRC) -o $(TARGET).out

run: compile
	./$(TARGET).out

clean:
	rm ./*.out