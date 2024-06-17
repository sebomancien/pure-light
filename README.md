# Pure Light
A matter RGB-CCT controller for ESP32 based devices.
Some dependencies for this repository only compiles on Linux. Therefore, this code is compatible with Linux only.

# Getting started
## Setup
Clone this repository.

Init and update the submodules.
```sh
git submodule update --init --recursive
```

Initialize IDF.
```sh
cd esp-idf
./install.sh
source ./export.sh
cd ..
```

Setup the target
```sh
idf.py set-target <target>
```

You can list the possible targets using the following command.
```sh
idf.py --list-targets
```

## Program and monitor
```sh
idf.py flash -p <port>
```

## Utility
### Mapping serial port to WSL
If you are developping on WSL, the command below allows you to map a serial port in your windows machine to your WSL instance to be used for programming and debugging.
```sh
usbipd list
usbipd bind --busid <busid>
usbipd attach --wsl --busid <busid>
```
