O c�digo teste com objetivo de obter o MAC do NodeMCU8266


Como queremos apenas exibir o MAC, a fun��o loop est� vazia 
Primeiro, inclu�mos a biblioteca ESP8266WiFi 
 #include <ESP8266WiFi.h>
 Para obter o MAC usamos o par�metro�macAdress  que retornar� o endere�o MAC no formato hexadecimal
