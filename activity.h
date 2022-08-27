
#ifndef ACTIVITY_H
#define ACTIVITY_H


unsigned int sumaIterativa(unsigned int n) {
	int suma=0; //O(1)
	for (int i=1;i<=n;i++){ //O(n)
		suma+=i;
	}
	return suma; //O(1)
}

unsigned int sumaRecursiva(unsigned int n) {
	if (n==0){ //O(1)
		return 0;
	}
	else return n+sumaRecursiva(n-1);
}

unsigned int sumaDirecta(unsigned int n) {
	return n*(n+1)/2;
}

#endif /* ACTIVITY_H */
