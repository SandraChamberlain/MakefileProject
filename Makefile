# Author: Sandra E. Chamberlain
# File: Makefile
# Purpose: Build system for Employee inheritance project. Complies all source files,
#	  links them into the employee executable, and provides a clean target.

CC = g++
TARGET = employee
CFLAGS = -c -Wall -Wextra

all: $(TARGET)

$(TARGET): main.o Employee.o Officer.o Supervisor.o
	$(CC) main.o Employee.o Officer.o Supervisor.o -o $(TARGET)

main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) main.cpp

Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) Employee.cpp

Officer.o: Officer.cpp Officer.h Employee.h
	$(CC) $(CFLAGS) Officer.cpp

Supervisor.o: Supervisor.cpp Supervisor.h Employee.h
	$(CC) $(CFLAGS) Supervisor.cpp

clean:
	rm -f *.o *~ $(TARGET)
