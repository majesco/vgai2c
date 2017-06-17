APP=inotify
LIB=vgai2c
SRC=$(APP).c
OBJ=$(LIB).o
EXE=../bin/$(APP)
CFLAG+=-I../include
LD_FLAGS+=-L../lib/ -lvgai2c
EXE_MSG="Generando ejecutable..."
CLN_MSG="Borrando ejecutable..."

all: del $(EXE)

del:
		rm ../lib/$(OBJ)
		
$(EXE):
		@echo $(value EXE_MSG)
		$(CC) -o $(EXE) $(SRC) $(CFLAG) $(LD_FLAGS)

clean:
		@echo $(value CLN_MSG) 	
		rm $(EXE)
