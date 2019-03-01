function mostrar()
{
	var nota;
	var sexo;
	var contador;
	var alumno;
	var promedio;
	var sumaNotas;
	contador=0;
	sumaNotas=0;
	promedio=0;
	while(contador<5)
	{
		nota=prompt("Ingrese la nota");
		nota=parseInt(nota);
		sexo= prompt("Ingrese su sexo");
		while(sexo != "m" && sexo != "f")
		{
			sexo=prompt("Ingrese m o f para el sexo");
		}
		while(nota<0 || nota>10)
		{
			nota=prompt("Ingrese bien su nota");
			nota=parseInt(nota);
		}
		sumaNotas = sumaNotas + nota;
		contador++;
	}
	promedio = sumaNotas/5;
	alert("sus datos se ingresaron correctamente");
	alert("El promedio de las notas es "+promedio);
}
