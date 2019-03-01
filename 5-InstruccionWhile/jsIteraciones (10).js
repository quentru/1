function mostrar()
{

	var contador;
	var respuesta;
	var numeroMaximo;
	var numeroMinimo;
	var numeroIngresado;
	var sumaNegativos;
	var sumaPositivos;
	var cantidadPositivos;
	var cantidadNegativos;
	var cantidadCeros;
	var cantidadPares;
	var operacionPar;
	var promedioPositivos;
	var promedioNegativos;
	var diferenciaEntreNegativosPositivos;
	//var bandera;
	// declarar variables
	
	respuesta='si';
	contador=0;
	sumaNegativos=0;
	sumaPositivos=0;
	cantidadNegativos=0;
	cantidadPositivos=0;
	cantidadCeros=0;
	cantidadPares=0;
	operacionPar=0;
	//numeroMaximo=-9999;
	//numeroMinimo=9999;
	//bandera="es la primera"
	while(respuesta!='no')
	{
		numeroIngresado=prompt("Ingrese numero");
		numeroIngresado=parseInt(numeroIngresado);
		if (numeroIngresado==0)
		{
			numeroIngresado++;
			cantidadCeros++;
			operacionPar = numeroIngresado % 2;
		}
		else
		{
			if (numeroIngresado>0)
			{
				sumaPositivos=sumaPositivos+numeroIngresado;
				cantidadPositivos++;
			}
			else
			{
				if(operacionPar=0)
				sumaPositivos=sumaPositivos+numeroIngresado;
				cantidadPositivos++;
				cantidadPares++;
			}
			if(numeroIngresado<0)
			{
				sumaNegativos=sumaNegativos+numeroIngresado;
				cantidadNegativos++;
			}
		respuesta=prompt("Ingrese no para salir");
		} 
	}
	promedioPositivos=sumaPositivos/cantidadPositivos;
	promedioNegativos=sumaNegativos/cantidadNegativos;
	diferenciaEntreNegativosPositivos = sumaPositivos + sumaNegativos;
	console.log("La cantidad de pares es "+cantidadPares);
	console.log("La cantidad de ceros es "+cantidadCeros);
	console.log(sumaNegativos);
	console.log(sumaPositivos);
	console.log("la cantidad de negativos es "+cantidadNegativos);
	console.log("la cantidad de positivos es "+cantidadPositivos);
	console.log("El promedio de los positivos es "+promedioPositivos);
	console.log("El promedio de los negativos es "+promedioNegativos);
	console.log("la diferencia entre negativos y positivos es "+diferenciaEntreNegativosPositivos);
}