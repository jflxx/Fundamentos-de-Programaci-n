Algoritmo RefraccionYReflexion
	Escribir "Ingrese indicede refraccion 1: "
	Leer IndRef1
	
	Escribir "Ingrese indice de refraccion 2: "
	Leer IndRef2
	
	Escribir "Ingrese el angulo incidente en grados sexagesimales: "
	Leer AngInc
	
	Si (IndRef1>=1 y IndRef2>=1) Entonces
		Si (AngInc>0) Entonces
			Si (AngInc<90) Entonces
				Si (IndRef1>IndRef2) Entonces
					
				SiNo
					Escribir "Indice del medio 1 debe ser mayor que el medio 2"
				FinSi
			SiNo
				Escribir "El angulo de incidencia debe ser menor que 90"
			FinSi
		SiNo
			Escribir "El angulo de incidencia debe ser mayor que cero" 
		FinSi
		
	SiNo
		Escribir "Los indices de refraccion deben ser numeros mayores o iguales a uno"
	
	FinSi
	
FinAlgoritmo
