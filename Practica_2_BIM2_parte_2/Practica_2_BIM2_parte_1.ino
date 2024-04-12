/* 
  Fundacion kinal
   Centro educativo tecnico laboral kinal
  Quinto perito
  Quinto electronica
  Codigo Tecnico: EB5AM
  Curso: Taller de eelectronica digital y reparación de computadoras
  Proyecto: Escritura de un pin digital (Encender y apagar
  Dev: Ricardo Andres Rodríguez de León
  Fecha: 12 de abril
*/

//Directivas de procesador
#define LedNaranja     4    //pin4 conectado a un led
#define tiempo_espera 500   //tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT); //Pin4 como salida.
  digitalWrite(LedNaranja, LOW); //LED conectado al pin13 inicia apagado
}

void loop()
{
  digitalWrite(LedNaranja, HIGH); //encendido el led conectado al pin4 
  delay(tiempo_espera); // Espera de 500 milisegundos.
  digitalWrite(LedNaranja, LOW);  //apago el led conectado al pin4
  delay(tiempo_espera); // Espera de 500 milisegundos.
}
