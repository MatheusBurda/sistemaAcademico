# Name of the project
PROJECT_NAME=exec

# .cpp Files
CPP_SOURCE=$(wildcard ./src/*.cpp)

# .h Files
H_SOURCE=$(wildcard ./src/*.h)

# Object Files
OBJ=$(subst .cpp,.o,$(subst src,obj,$(CPP_SOURCE)))

# Compiler
CC=g++

# Flags for Compiler
CC_FLAGS=-c


# Linker Flags
LINKER_FLAGS=-Wwrite-strings


# Compilation and linking
all: objFolder $(PROJECT_NAME)

$(PROJECT_NAME):	$(OBJ)
				@ echo 'Bulding binary using G++ linker: $@'
				$(CC) -o $@ $^ $(LINKER_FLAGS)
				@ echo 'Finished buiding binary: $@'
				@ echo ' '

./obj/%.o: ./src/%.cpp ./src/%.h
				@ echo 'Building target using G++ compiler: $<'
				$(CC) -o $@ $< $(CC_FLAGS)
				@ echo ' '

./obj/main.o: ./src/main.cpp $(H_SOURCE)
		    @ echo 'Building target using G++ compiler: $<'
		    $(CC) -o $@ $< $(CC_FLAGS)
		    @ echo ' '

objFolder:
				@ mkdir -p obj

clean:
		    @ $(RM) ./obj/*.o $(PROJECT_NAME) *~
		    @ rmdir obj

rebuild: clean all