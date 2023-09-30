/* learn-in-depth 
Unit3_lesson3_lab2
Eng.Amr Ahmed */

MEMORY
{
	FLASH (RX) : ORIGIN = 0x08000000, LENGTH = 128k
	SRAM (RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}
SECTIONS
{
	.text : {
		*(.Vectors*)
		*(.text*)
		*(.rodata)
		}> FLASH
	.bss : {
	*	(.bss*)
	}> SRAM
		
}