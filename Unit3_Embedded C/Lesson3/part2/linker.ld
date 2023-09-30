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
		_E_text = . ;
			}> FLASH
	
	.data : {
		_S_DATA = . ;
		*(.data*)
		. = ALIGN(4);
		_E_DATA = . ;
			}> SRAM AT> FLASH

	.bss : {
		_S_bss = . ;
		*(.bss*)
		_E_bss = . ;
		. = . + 0x1000 ;
		_stack_top = . ;
			}> SRAM
		
}