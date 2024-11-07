ENTRY(reset_vector)

MEMORY {
  flash (rx) : ORIGIN =0x08000000, LENGTH =512K
  sram (rw) : ORIGIN =0x20000000, LENGTH =128K
}

PROVIDE(_start_of_sram = ORIGIN(sram) + LENGTH(sram));

SECTIONS {
  .text :
  {
    . = ALIGN(4);
    _start_of_text = .;
    KEEP(*(.cs_vectors))
    KEEP(*(.text))
    KEEP(*(.text.*))
    . = ALIGN(4);
    KEEP(*(.rodata .rodata*))
    . = ALIGN(4);
    _end_of_text = .;
  } > flash

  .data :
  {
    . = ALIGN(4);
    _start_of_data = .;
    KEEP(*(.data))
    KEEP(*(.data.*))
    . = ALIGN(4);
    _end_of_data = .;
  } > sram AT > flash

  .bss (NOLOAD):
  {
    . = ALIGN(4);
    _start_of_bss = .;
    KEEP(*(.bss))
    KEEP(*(COMMON))
    . = ALIGN(4);
    _end_of_bss = .;
  } > sram
}
