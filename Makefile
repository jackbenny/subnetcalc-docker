subnetcalc: subnetcalc.c
	gcc -Wall -pedantic subnetcalc.c -lm -static -o subnetcalc
	docker build . -t subnetcalc

clean: subnetcalc
	rm subnetcalc
	docker image rm subnetcalc
