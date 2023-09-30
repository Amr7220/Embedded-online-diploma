/* learn-in-depth 
Unit3_lesson3_lab2
Eng.Amr Ahmed */

 .section .Vectors
.word 0x20001000 		/* sp */
.word _reset			/* 1 Reset   */
.word Vector_handlers	/* 2 NMI  */
.word Vector_handlers	/* 3 Hard fault  */
.word Vector_handlers	/* 4 MemManage  */
.word Vector_handlers	/* 5 Bus fault  */
.word Vector_handlers  	/* 6 Usage fault */
.word Vector_handlers  	/* 7 Reserved  */
.word Vector_handlers  	/* 8 Reserved  */
.word Vector_handlers  	/* 9 Reserved  */
.word Vector_handlers  	/* 10 Reserved  */
.word Vector_handlers  	/* 11 SV call  */
.word Vector_handlers  	/* 12 Debug monitor  */
.word Vector_handlers  	/* 13 Reserved  */
.word Vector_handlers  	/* 14 Pend SV  */
.word Vector_handlers  	/* 15 Sys tick  */
.word Vector_handlers  	/* 16 IRQ0  */
.word Vector_handlers  	/* 17 IRQ1  */
.word Vector_handlers  	/* 18 IRQ2  */
.word Vector_handlers  	/* 19 ...  */

.section .text

_reset:
	bl main
	b	.

.thumb_func
Vector_handlers:
	b _reset