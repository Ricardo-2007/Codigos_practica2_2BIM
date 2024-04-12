/*
  Fundacion Kinal
  Centro educativo tecnico laboral kinal
  Quinto perito
  Quinto electronica
  Codigo Tecnico: EB5AM
  Curso: Taller de eelectronica digital y reparación de computadoras
  Proyecto: Como leer un pin digital
  Dev: Ricardo Andres Rodríguez de León
  Fecha: 12 de abril
*/

// Directivas del preprocesador
#define push_button 2 //push button conectado al pin2
#define led 3

void setup() {
  pinMode(push_button, INPUT); //Pin2 como entrada
  pinMode(led, OUTPUT);
  Serial.begin(9600);                       //Inicio la comunicación serial
  Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
}

void loop(){
  //Variable local,que se encarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin2
  bool estado_boton = digitalRead(push_button);
  if (estado_boton == HIGH) //¿He presionado el interruptor?
  {
    //si lo eh presionado
   digitalWrite(led, LOW); //apago el red
  } else {
    //si no lo eh presionado
    digitalWrite(led, HIGH); //mantengo encendido el led
  }
}
