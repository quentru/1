function mostrar()
{
	var contador;
	var velocidad;
	var tipoCombustible;
	var promedio;
	var sumaVelocidades;
	var nafta;
	var velocidadMaxima;
	var velocidadMinima;
	contador=0;
	sumaVelocidades=0;
	while(contador<5)
	{
		velocidad = prompt("Ingrese su velocidad");
		velocidad=parseInt(velocidad);
		tipoCombustible = prompt("Ingrese su tipo de combustible");
		velocidadMinima=velocidad;
		velocidadMaxima=velocidad;
	while(velocidadMinima<velocidad)
	{
		velocidadMinima=velocidad;
	}
	while(velocidad<0 || velocidad>250)
	{
		velocidad = prompt("Los valores de velocidad deben estar entre 0 y 250");
		velocidad=parseInt(velocidad);
		contador--;
	}
	while(tipoCombustible!="s" && tipoCombustible!="l")
	{
		tipoCombustible=prompt("los dos tipos de combustibles se ingresan con s o l");
		contador--;
	}
	sumaVelocidades=sumaVelocidades+velocidad;
	contador++;
	}
	promedio=sumaVelocidades/5;
	alert("Se ingresaron bien los datos, el promedio de las velocidades es "+promedio+" la velocidad mas baja es "+velocidadMinima+"y su combustible es ");
}
