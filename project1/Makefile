CC=gcc
COMPILE=$(CC) -I/usr/include/libxml
CFILES=project.c
OBJECT=project.o
TARGET=xmlvalid
all:
	$(COMPILE) $(CFILES) -lxml2 -o $(TARGET)

clean:
	del $(TARGET) $(OBJECT)
