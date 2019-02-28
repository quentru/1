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
	//var bandera;
	// declarar variables
	
	var respuesta='si';
	contador=0;
	sumaNegativos=0;
	sumaPositivos=0;
	cantidadNegativos=0;
	cantidadPositivos=0;
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
		}
		else
		{
		if (numeroIngresado<0)
		{
			sumaNegativos=sumaNegativos+numeroIngresado;
			cantidadNegativos++;
		}
		if (numeroIngresado>0)
		{
			sumaPositivos=sumaPositivos+numeroIngresado;
			cantidadPositivos++;
		}
		respuesta=prompt("Ingrese no para salir");
	}
	console.log(sumaNegativos);
	console.log(sumaPositivos);
	console.log("la cantidad de negativos es "+cantidadNegativos);
	console.log("la cantidad de negativos es "+cantidadPositivos);
}
} 