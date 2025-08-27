TARGET = 13
SRC = $(TARGET).cpp

all : run

compile : $(SRC)
	g++ $(SRC) -DDEBUG -o $(TARGET)

run : compile
	./$(TARGET)

clean : 
	rm ./$(TARGET).out
