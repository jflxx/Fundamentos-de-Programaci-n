Algoritmo EVCartas	
	Escribir "Ingrese Carta1"
	Leer Carta1
	Escribir "Ingrese Carta2"
	Leer Carta2
	Escribir "Ingrese Carta3"
	Leer Carta3
	Escribir "Ingrese Carta4"
	Leer Carta4
	Escribir "Ingrese Carta5"
	Leer Carta5
	CartaMayor <- -1
	
	Si ((1<=Carta1 y Carta1<=13) Y (1<=Carta2 y Carta2<=13) Y (1<=Carta3 y Carta3<=13) Y (1<=Carta4 y Carta4<=13)) Entonces
		Si (Carta1>Carta2 y Carta1> Carta3 y Carta1>Carta4 y Carta1 > carta5) Entonces
			CartaMayor <- Carta1
		SiNo
			Si (Carta2>Carta1 y Carta2> Carta3 y Carta2>Carta4 y Carta2>carta5) Entonces
				CartaMayor <- Carta2
			SiNo
				Si (Carta3>Carta1 y Carta3> Carta2 y Carta3>Carta4 y Carta3>carta5) Entonces
					CartaMayor <- Carta3
				SiNo
					Si (Carta4>Carta1 y Carta4> Carta3 y Carta4>Carta4 y Carta4>carta2) Entonces
						CartaMayor <- Carta4
					SiNo
						Si (Carta5>Carta1 y Carta5> Carta2 y Carta5>Carta3 y Carta5>carta4) Entonces
							CartaMayor <- Carta5
						SiNo
							Escribir "No hay escalera real ni simple"
						FinSi
						
					FinSi
					
				FinSi
				
			FinSi
		FinSi
					
		SI CartaMayor<>1 Entonces
			SumaCartas<-Carta1+Carta2+Carta3+Carta4+Carta5
			si (CartaMayor*5-10=SumaCartas) Entonces
				Escribir "Escalera simple"
			SiNo
				si (47=SumaCartas y CartaMayor=13) Entonces
					Escribir "Escalera real"
				SiNo
					Escribir "No es una escalera real ni simple"
				FinSi
			FinSi
			
		FinSi
			
		
	SiNo
		Escribir "El valor de alguna carta es incorreto"
		
	FinSi
	
FinAlgoritmo
