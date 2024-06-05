Algoritmo Dist_Puntos
	
	Escribir "Ingrese el punto A"
	Leer Punto_Ax,Punto_Ay
	
	Escribir "Ingrese el punto B"
	Leer Punto_Bx,Punto_By
	
	Si (Punto_Ax>0&Punto_Ay>0&Punto_Bx>0&Punto_By>0) Entonces
			
		Distancia <- raiz((Punto_Ax-Punto_Bx)^2 + (Punto_Ay-Punto_By)^2)
		
		Escribir "La Distancia entre puntos es: ", Distancia
		
	SiNo
		Escribir "Los puntos no  se encuentran en el primer cuadrante"
	FinSi
			
FinAlgoritmo
