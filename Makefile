subnetcalc: subnetcalc.c
	gcc -std=c99 -Wall -pedantic subnetcalc.c -lm -static -o subnetcalc
	docker build . -t subnetcalc

clean: subnetcalc
	rm subnetcalc
