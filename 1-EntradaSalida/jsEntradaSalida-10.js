/*Debemos lograr tomar el importe por ID.
Transformarlo a entero (parseInt), luego
mostrar el importe con un Descuento del 25 %
en el cuadro de texto "RESULTADO"*/
function mostrarAumento()
{
    var sueldo
    var resultado
    var porcentaje
    sueldo =  parseInt(document.getElementById("importe").value);
    porcentaje = 25 * sueldo /100
    resultado = sueldo - porcentaje;
document.getElementById("resultado").value = resultado	
}
