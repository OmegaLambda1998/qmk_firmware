#
# --- Enable Features ---
#

# Enable RGB Matrix Lighting
RGB_MATRIX_ENABLE = yes

# Link Time Optimisation => Longer compiling, smaller compiled size
LTO_ENABLE = yes

# Enable System and Audio key codes
EXTRAKEY_ENABLE = yes

# Modify keyboard behaviour without flashing or unplugging (for Bootmagic)
# Command keycode => LSHIFT+RSHIFT+KEY
# D			Toggle debugging over serial
# X			Toggle key matrix debugging
# K			Toggle keyboard debugging
# M			Toggle mouse debugging
# C			Enable the Command console
# V			Print the running QMK version to the console
# S			Print the current keyboard status to the console
# H			Print Command help to the console
# SLASH		Print Command help to the console (alternate)
# 0			Make layer 0 the default layer
# GRAVE		Make layer 0 the default layer (alternate)
# 1			Make layer 1 the default layer
# 2			Make layer 2 the default layer
# 3			Make layer 3 the default layer
# 4			Make layer 4 the default layer
# 5			Make layer 5 the default layer
# 6			Make layer 6 the default layer
# 7			Make layer 7 the default layer
# 8			Make layer 8 the default layer
# 9			Make layer 9 the default layer
# B			Jump to bootloader
# ESC		Jump to bootloader (alternate)
# CAPS		Lock the keyboard so nothing can be typed
# E			Print stored EEPROM config to the console
# BSPACE	Clear the EEPROM
# N			Toggle N-Key Rollover (NKRO)
# Z			Toggle LED when computer is sleeping
COMMAND_ENABLE = yes

#
# --- Disable Features ---
#

# Control mouse movement and clicks
MOUSKEY_ENABLE = no

# https://docs.qmk.fm/features/space_cadet
SPACE_CADET_ENABLE = no

# https://docs.qmk.fm/features/grave_esc
GRAVE_ESC_ENABLE = no

# Holding ESC resets EEPROM settings, and preps for new firmware
BOOTMAGIC_ENABLE = no

# https://docs.qmk.fm/keycodes_magic
MAGIC_ENABLE = no

# Enable Debug Information - can be enabled through COMMAND
CONSOLE_ENABLE = no

# https://docs.qmk.fm/features/audio
AUDIO_ENABLE = no
