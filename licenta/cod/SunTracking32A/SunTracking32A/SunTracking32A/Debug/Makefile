################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../adc_driver.c \
../charge_driver.c \
../graphics.c \
../hx1230.c \
../joystick_driver.c \
../l293d.c \
../light.c \
../main.c \
../monitoring.c \
../pwm_driver.c \
../sg90_driver.c \
../stand_control.c \
../state_handler.c \
../tracking.c \
../unipolar_driver.c \
../user_interface.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
adc_driver.o \
charge_driver.o \
graphics.o \
hx1230.o \
joystick_driver.o \
l293d.o \
light.o \
main.o \
monitoring.o \
pwm_driver.o \
sg90_driver.o \
stand_control.o \
state_handler.o \
tracking.o \
unipolar_driver.o \
user_interface.o

OBJS_AS_ARGS +=  \
adc_driver.o \
charge_driver.o \
graphics.o \
hx1230.o \
joystick_driver.o \
l293d.o \
light.o \
main.o \
monitoring.o \
pwm_driver.o \
sg90_driver.o \
stand_control.o \
state_handler.o \
tracking.o \
unipolar_driver.o \
user_interface.o

C_DEPS +=  \
adc_driver.d \
charge_driver.d \
graphics.d \
hx1230.d \
joystick_driver.d \
l293d.d \
light.d \
main.d \
monitoring.d \
pwm_driver.d \
sg90_driver.d \
stand_control.d \
state_handler.d \
tracking.d \
unipolar_driver.d \
user_interface.d

C_DEPS_AS_ARGS +=  \
adc_driver.d \
charge_driver.d \
graphics.d \
hx1230.d \
joystick_driver.d \
l293d.d \
light.d \
main.d \
monitoring.d \
pwm_driver.d \
sg90_driver.d \
stand_control.d \
state_handler.d \
tracking.d \
unipolar_driver.d \
user_interface.d

OUTPUT_FILE_PATH +=SunTracking32A.elf

OUTPUT_FILE_PATH_AS_ARGS +=SunTracking32A.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler

































./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="SunTracking32A.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a"  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "SunTracking32A.elf" "SunTracking32A.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "SunTracking32A.elf" "SunTracking32A.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "SunTracking32A.elf" > "SunTracking32A.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "SunTracking32A.elf" "SunTracking32A.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "SunTracking32A.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "SunTracking32A.elf" "SunTracking32A.a" "SunTracking32A.hex" "SunTracking32A.lss" "SunTracking32A.eep" "SunTracking32A.map" "SunTracking32A.srec" "SunTracking32A.usersignatures"
	