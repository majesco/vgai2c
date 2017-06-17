APP=library
LIB=inotify
SRC=$(LIB).c
OBJ=$(LIB).o
EXE=../bin/$(APP)
CFLAG+=-I../include
LD_FLAGS+=-L../lib/ -lvgai2c
EXE_MSG="Generando ejecutable..."
CLN_MSG="Borrando ejecutable..."

all: $(EXE)

$(EXE):
		@echo $(value EXE_MSG)
		$(CC) -o $(APP) $(SRC)

clean:
		@echo $(value CLN_MSG) 	
		rm $(EXE)
