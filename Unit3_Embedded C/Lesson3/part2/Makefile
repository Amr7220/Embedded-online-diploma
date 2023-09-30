#prepared by Amr Ahmed

CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3 -mthumb
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
all: learn-in-depth.bin
	@echo "====Build is done===="
clean: 
	rm *.bin *.elf
clean_all: 
	rm *.bin *.elf *.o *.map
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
learn-in-depth.elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@