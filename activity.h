
#ifndef ACTIVITY_H
#define ACTIVITY_H


unsigned int sumaIterativa ( unsigned int n ) {      
	int suma = 0 ;                                    //    O(1)
	for (int i = 1 ; i <= n ; i++ ) {                 //    O(n)
		suma += i ;
	}
	return suma ;                                     //    O(1)
}
// Complejidad: O(1)+O(n)+O(1) = O(n)+O(2)

unsigned int sumaRecursiva ( unsigned int n ) {
	if ( n == 0 ) {                                   //    O(1)
		return 0 ;                         
	}
	else return n + sumaRecursiva ( n - 1 ) ;         //    O(1)
}
// Complejidad: O(1)+O(1) = O(2)

unsigned int sumaDirecta ( unsigned int n ) {        
	return n * ( n + 1 ) / 2 ;                        //    O(1)
}
// Complejidad: O(1)

#endif /* ACTIVITY_H */
