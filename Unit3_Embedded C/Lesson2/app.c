#include"UART.h"
unsigned char string_buffer[100] = "learn-in-depth:<Amr>" ;
int main()
{
	uart_send_string(string_buffer);
}