/*Debemos lograr tomar el importe por ID ,
transformarlo a entero (parseInt), luego
mostrar el importe con un aumento del 10 %
en el cuadro de texto "RESULTADO".*/
function mostrarAumento()
{
    var sueldo
    var resultado
    var porcentaje
    sueldo =  parseInt(document.getElementById("sueldo").value);
    porcentaje = 10 * sueldo /100
    resultado = sueldo + porcentaje;
document.getElementById("resultado").value = resultado   
}
