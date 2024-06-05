Algoritmo CalculoPI
	Escribir "Ingrese la cantidad de terminos que desea: "
	Leer CantTerm
	
	Si (CantTerm>0) Entonces
		prod<-1
		i<-1
		Mientras (i<= CantTerm)  Hacer
			Term <- ((4*i)^2)/((4*i-1)*(4*i+1))
			prod <- prod*Term
			
			i<- i+1
		FinMientras
		
		Escribir prod
		
		Picalculado <- prod*2*rc(2)
		pidado <- 3.141592
		error <- abs(pidado-Picalculado)
		
		Si (error>0.005) Entonces
			Escribir "El error calculado si es considerable"
			
		SiNo
			Escribir "El error calculado no es considerable"
		FinSi
		
		
	SiNo
		Escribir "Datos erroneos"
	FinSi
FinAlgoritmo
