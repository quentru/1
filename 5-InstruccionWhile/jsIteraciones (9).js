function mostrar()
{

	var contador;
	var respuesta;
	var numeroMaximo;
	var numeroMinimo;
	var numeroIngresado;
	var bandera;
	// declarar variables
	
	var respuesta='si';
	contador=0;
	numeroMaximo=-9999;
	numeroMinimo=9999;
	bandera="es la primera"
	while(respuesta!='no')
	{

		numeroIngresado=prompt("Ingrese Numero");
		numeroIngresado=parseInt(numeroIngresado);
		if(bandera==0)
		{
			numeroMaximo=numeroIngresado;
			numeroMinimo=numeroIngresado;
			bandera=1
		}
		else
		{
		if (numeroMaximo<numeroIngresado)
		{
			numeroMaximo=numeroIngresado;
		}
		if(numeroMinimo>numeroIngresado){
			numeroMinimo=numeroIngresado;
		}
		respuesta=prompt("Ingrese no para salir");
	}

	console.log("el maximo es "+numeroMaximo);
	console.log("el minimo es "+numeroMinimo);

}//FIN DE LA
}