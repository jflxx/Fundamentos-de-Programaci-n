Algoritmo ConjeturaDeGoldBach
	Escribir "Ingrese rango inicial a:"
	Leer a
	Escribir "Ingrese rango final b: "
	Leer b
	i<-a
	f<-2
	Mientras (i<=b) Hacer
		
		Si (i%2=0 y i>2) Entonces
			e<-1
			Mientras (f<=i) Hacer
				contprimo<-0
				Mientras (e<=f) Hacer
					si (f%e=0)Entonces
						contprimo<- contprimo+1
					FinSi
					e<-e+1
				FinMientras
				
				si(contprimo=2)Entonces
					Escribir i," = ", f, " + ",i-f 
				FinSi
 				f<-f+1
			FinMientras
		FinSi
		f<-2
		i<- i+1
	FinMientras
FinAlgoritmo
