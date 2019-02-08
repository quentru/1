/*Debemos lograr tomar nombre y edad por ID y mostrarlos concatenados 
ej.: "Usted se llama José y tiene 66 años" 	*/
	function mostrar()
    {
    var l
    var t
    var resultado
    l = document.getElementById("elNombre").value;
    t = document.getElementById("laEdad").value;
    resultado=l.concat(t);
   alert(resultado)
    }


