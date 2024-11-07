CC := arm-none-eabi-gcc
MARCH := armv7-m
FABI := hard
FPU := fpv4-sp-d16

MAP_FILE := result.map

FLAGS := -O0 -g -mfloat-abi=$(FABI) -march=$(MARCH) -mfpu=$(FPU) -mthumb -Wall
LFLAGS := -T linker_script.ld -Map=$(MAP_FILE)



all: result.elf

result.elf: main.o startup.o
	arm-none-eabi-ld $(LFLAGS) -o $@ $^

main.o:main.c
	$(CC) -c $(FLAGS) $^ -o $@

startup.o:startup.c
	$(CC) -c $(FLAGS) $^ -o $@

re: clean all

clean:
	rm -f *.o *.elf
