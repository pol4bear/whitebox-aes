CC=g++
TARGET=wbaes
OBJS=main.o

$(TARGET): $(OBJS)
  $(CC) -o $@ $^

main.o: main.cpp whitebox-homework1.h

clean:
	rm -f $(OBJS) $(TARGET)
