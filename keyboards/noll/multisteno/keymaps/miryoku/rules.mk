# MCU name
# MCU = STM32F103

# Bootloader selection
# BOOTLOADER = stm32duino

# project specific files
# SRC =	keyboard.c

# BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration
# MOUSEKEY_ENABLE = yes	# Mouse keys
# EXTRAKEY_ENABLE = yes	# Audio control and System control
# CONSOLE_ENABLE = yes	# Console for debug
# COMMAND_ENABLE = yes    # Commands for debug and configuration
# SLEEP_LED_ENABLE = yes  # Breathing sleep LED during USB suspend
# NKRO_ENABLE = yes	    # USB Nkey Rollover
# COMBO_ENABLE = no		# Enable Key Combos
# STENO_ENABLE = yes		# Stenography keys
# STENO_PROTOCOL = geminipr	# geminipr or txbolt

# AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes

# Enable CAPS WORD
CAPS_WORD_ENABLE = yes
# COMMAND_ENABLE = no

KEY_OVERRIDE_ENABLE = yes

JOYSTICK_DRIVER	= digital
JOYSTICK_ENABLE = yes
COMBO_ENABLE = yes
