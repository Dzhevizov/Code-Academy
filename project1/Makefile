CC=gcc
COMPILE=$(CC) -g
CFILES=project.c
OBJECT=project.o
TARGET=project
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET) $(OBJECT)
