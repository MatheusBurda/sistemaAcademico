# Name of the project
PROJECT_NAME=exec

# .cpp Files
CPP_SOURCE=$(wildcard ./source/*.cpp)

# .hpp Files
HPP_SOURCE=$(wildcard ./source/*.hpp)

# Object Files
OBJ=$(subst .cpp,.o,$(subst source,objects,$(CPP_SOURCE)))

# Compiler
CC=g++

# Flags for Compiler
CC_FLAGS=-c


# Linker Flags
LINKER_FLAGS=-Wall


# Compilation and linking
all: objFolder $(PROJECT_NAME)

$(PROJECT_NAME):	$(OBJ)
				@ echo 'Bulding binary using G++ linker: $@'
				$(CC) -o $@ $^ $(LINKER_FLAGS)
				@ echo 'Finished buiding binary: $@'
				@ echo ' '

./objects/%.o: ./source/%.cpp ./source/%.hpp
				@ echo 'Building target using G++ compiler: $<'
				$(CC) -o $@ $< $(CC_FLAGS)
				@ echo ' '

./objects/main.o: ./source/main.cpp $(HPP_SOURCE)
		    @ echo 'Building target using G++ compiler: $<'
		    $(CC) -o $@ $< $(CC_FLAGS)
		    @ echo ' '

objFolder:
				@ mkdir -p objects

clean:
		    @ $(RM) ./objects/*.o $(PROJECT_NAME) *~
		    @ rmdir objects
