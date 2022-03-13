# OpenCV_cpp_tutorial
Installation and some basic examples for beginners

# Install
Follow steps in install.sh

# Set vscode include path
ctrl+shift+p \
select “C/C++: Edit Configurations(JSON)” \
add "/usr/local/include/opencv4/**"

```
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/local/include/opencv4/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```


# Examples

## 1. Hello world 

### Commandline
```g++ hello.cpp -o output -std=c++11 `pkg-config --cflags --libs opencv4```\
```./output```

### Makefile

```
CC = g++\
PROJECT = new_output\
SRC = hello.cpp\
LIBS = `pkg-config --cflags --libs opencv4`\
$(PROJECT) : $(SRC)\
	$(CC) $(SRC) -o $(PROJECT) $(LIBS)
```
Hint: make is cocky about tab, 4 spaces wont work

```make```
```./new_output```


## 2. Camera capture


# Reference

http://www.codebind.com/linux-tutorials/how-to-install-opencv-in-ubuntu-20-04-lts-for-c-c/

http://techawarey.com/programming/install-opencv-c-c-in-ubuntu-18-04-lts-step-by-step-guide/

vscode tips

https://medium.com/analytics-vidhya/how-to-install-opencv-for-visual-studio-code-using-ubuntu-os-9398b2f32d53


