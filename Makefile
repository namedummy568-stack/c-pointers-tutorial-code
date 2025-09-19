CC = gcc
CFLAGS = -Wall -Wextra -pedantic

# Simulate an outdated library version
# In a real scenario, this would be a dependency like 'libssl-1.0.0'
# that Dependabot would flag as vulnerable or outdated.
OUTDATED_LIB_VERSION = 2.0.0

all: main

main: main.c
	$(CC) $(CFLAGS) main.c -o main -loutdated_library-$(OUTDATED_LIB_VERSION)

clean:
	rm -f main
