# struct:struct.o
# 	gcc -o struct struct.o 

# struct.o: struct.c
# 	gcc -c struct.c 

# clean:
# 	rm*.0 struct		


struct:struct.c 
	gcc -o struct struct.c

clean: 
	rm struct struct*o	