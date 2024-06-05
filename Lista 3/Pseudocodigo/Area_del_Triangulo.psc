Algoritmo Area_del_Triangulo
	
	Escribir "Ingrese el valor de cada lado"
	Leer LadoA,LadoB,LadoC
	
	SI (LadoA+LadoB>LadoC&LadoB+LadoC>LadoA&LadoC+LadoA>LadoB) Entonces
		
		s <- (LadoA+LadoB+LadoC)/2
		Area <- raiz(s*(s-LadoA)*(s-LadoB)*(s-LadoC))
		Escribir "El area del triangulo es ", Area
	SiNo
		Escribir "Datos de entrada incorrectos"		
	FinSi
	
	
FinAlgoritmo
