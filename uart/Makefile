# makefile for using stm8
ST_HOME= c:/Program Files (x86)/STMicroelectronics/st_toolset/stvp/
CC = sdcc
CFLAGS =--std-c99 -mstm8  --vc -I ../include --opt-code-speed
SOURCES= main.c uart.c
OBJECTS= $(SOURCES:.c=.rel)
ASM= $(SOURCES:.c=.asm)
HEXFILE = flash.hex

# Rule to make object form source files
%.rel: %.c
	$(CC) -c $(CFLAGS) $<
.PHONY: clean

all: $(SOURCES) $(OBJECTS) 
	$(CC) $(CFLAGS) $(OBJECTS) -o $(HEXFILE)

clean:
	del $(OBJECTS) $(ASM) $(HEXFILE)
	del *.cdb *.lk *.lst *.map *.rst *.sym *.adb
flash: all
	@"$(ST_HOME)STVP_CmdLine.exe" -BoardName=ST-LINK -Device=STM8S103F3 -Port=USB -ProgMode=SWIM -no_loop -no_log -FileProg=$(HEXFILE)
