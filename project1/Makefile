CC=gcc
FLAG1=-I/usr/include/libxml
FLAG2=-lxml2
CFILES=project.c
OBJECT=project.o
TARGET=xmlvalid
all:
	$(CC) $(FLAG1) $(CFILES) $(FLAG2) -o $(TARGET)

clean:
	del $(TARGET) $(OBJECT)
