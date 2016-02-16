#自动编译多个.c构成的项目,即把所有的.c编译成同一个可执行文件
CC:=gcc
CFLAGS:=-Wall -g -lpthread
SRC:=${wildcard *.c} #将当前目录下的以.c为后缀的文件名赋给SRC
OBJ:=${patsubst %.c,%.o,$(SRC)}#将Src中以.c为后缀的字符串替换成.o为后缀赋给OBJ

test:$(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS)


%.o:%.c myhead.h
	$(CC) -o $@ -c $< $(CFLAGS) 

.PHONY:clean print
clean:
	@rm -f *.o test .*.sw?
print:
	@echo $(SRC)
	@echo $(OBJ)
