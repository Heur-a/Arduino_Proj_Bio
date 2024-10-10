/*
 * Nombre del fichero: LED.h
 * Descripción: Definición de la clase LED para controlar un LED.
 * Autores: Carla Rumeu Montesinos, Elena Ruiz de la Blanca i Àlex Escrivà Caravaca
 * Fecha: 30 de septiembre de 2024
 *
 * Este archivo ha sido realizado por Carla Rumeu Montesinos, Elena Ruiz de la Blanca y Álex Escrivà Caravaca el 30 de septiembre de 2024.
 * Contiene la implementación de la clase LED, que permite encender, apagar y hacer brillar un LED.
 * 
 * Todos los derechos reservados.
 */

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

/** 
 * Espera un tiempo determinado en milisegundos.
 * 
 * @param tiempo Tiempo en milisegundos para esperar.
 */

 // Z -> esperar()
void esperar (long tiempo) {
  delay (tiempo);
}

/** 
 * Clase LED para controlar un LED.
 * 
 * Esta clase permite encender, apagar y hacer brillar un LED.
 */
class LED {
private:
  int numeroLED;  ///< Número del pin del LED.
  bool encendido; ///< Estado del LED: verdadero si está encendido, falso si está apagado.

public:

  /** 
   * Constructor de la clase LED.
   * 
   * @param numero El número del pin al que está conectado el LED.
   */

   // Z -> LED()
  LED(int numero) : numeroLED(numero), encendido(false) {
    pinMode(numeroLED, OUTPUT); ///< Configura el pin como salida.
    apagar(); ///< Apaga el LED al inicializar.
  }

  /** 
   * Enciende el LED.
   */

   // encender()
  void encender () {
  digitalWrite(numeroLED, HIGH); 
  encendido = true;
  }

  /** 
   * Apaga el LED.
   */

   // apagar()
  void apagar () {
    digitalWrite(numeroLED, LOW);
    encendido = false;
  }

  /** 
   * Alterna el estado del LED (enciende si está apagado y apaga si está encendido).
   */

   // alternar()
  void alternar () {
  if (encendido) {
    apagar();
  } else {
    encender ();
  }
  } // ()

  /** 
   * Hace que el LED brille durante un tiempo determinado.
   * 
   * @param tiempo Tiempo en milisegundos que el LED estará encendido.
   */

   // Z -> brillar()
  void brillar (long tiempo) {
  encender ();
  esperar(tiempo); 
  apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
