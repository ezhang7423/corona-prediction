header: locations/city.h
	g++ -c $^

clean:
	find . -type f -name '*.o' -delete && find . -type f -name '*.gch' -delete