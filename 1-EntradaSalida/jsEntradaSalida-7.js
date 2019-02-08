/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostrar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
function sumar()
{	
	var resultado
    resultado =  parseInt(document.getElementById("numeroUno").value) + parseInt(document.getElementById("numeroDos").value);
    alert(resultado);
}

function restar()
{
	var resultado
    resultado =  parseInt(document.getElementById("numeroUno").value) - parseInt(document.getElementById("numeroDos").value);
    alert(resultado);
}

function multiplicar()
{ 
	var resultado
    resultado =  parseInt(document.getElementById("numeroUno").value) * parseInt(document.getElementById("numeroDos").value);
    alert(resultado);
}

function dividir()
{
	var resultado
    resultado =  parseInt(document.getElementById("numeroUno").value) / parseInt(document.getElementById("numeroDos").value);
    alert(resultado);
}

