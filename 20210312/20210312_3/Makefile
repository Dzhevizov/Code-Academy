CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*)
OBJECT=func3.o main3.o
TARGET=find5elem
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)
