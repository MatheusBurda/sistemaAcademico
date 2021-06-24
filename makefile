# Project Name
PROJECT := sistemaAcademico

# Source folder
SRC_DIR := src
# Object folder - to be created
OBJ_DIR := obj

SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Compiler
CC := g++

# Flags
CPPFLAGS := -Iinclude # -I folder_to_includes
CFLAGS   := -Wall
LDFLAGS  := -Llib
LDLIBS   := -lm

.PHONY: all clean build

all: $(PROJECT)

$(PROJECT): $(OBJ)
	@ $(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@
	@ echo '============================ Finished building ============================'

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@ mkdir -p $@

build: cleanMain all

cleanMain:
	@ echo '=============== Started building project using g++ compiler ==============='
	@ $(RM) $(OBJ_DIR)/main.o

clean:
	@ $(RM) -r $(OBJ_DIR) $(PROJECT)

-include $(OBJ:.o=.d)