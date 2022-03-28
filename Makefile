$(CC) = gcc

appln:
	$(CC) main.c mean.c sub.c -o appln

clean:
	rm -f *.o appln

