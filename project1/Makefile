CC=gcc
COMPILE=$(CC) -g
CFILES=project.c
OBJECT=project.o
TARGET=xmlvalid
	$(CC) -I/usr/include/libxml $(CFILES) -lxml2 -o $(TARGET)
clean:
	del $(TARGET) $(OBJECT)
