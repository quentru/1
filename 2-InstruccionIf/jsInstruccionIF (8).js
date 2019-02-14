function mostrar()
{
//tomo la edad  
var ec, edad
edad=document.getElementById("edad").value	
ec=document.getElementById("estadoCivil").value
if(edad>18 && ec=="Soltero"){
    alert("Es soltero y no es menor")
}
}//FIN DE LA FUNCIÓN
	
