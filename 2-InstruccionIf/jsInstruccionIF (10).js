function mostrar()
{
	//Genero el número RANDOM entre 1 y 10 
	var num
	num=Math.floor((Math.random()*10)+1)
if(num>=9){
	alert("Exelente");
}
if(num>4){
	alert("Aprobo");
}
if(num<4){
	alert("Segui participando")
}
}//FIN DE LA FUNCIÓN