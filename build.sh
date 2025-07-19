#include #!/bin/bash

if [ ! -d bin ]; then
  mkdir bin
fi


SOURCE="src/*.cpp"
OUTPUT="bin/game"


g++ $SOURCE -o $OUTPUT -lraylib -lm -lpthread -ldl -lrt -lX11

if [ $? -eq 0 ]; then
  echo "Build Succeeded"
else
  echo "Build Failed"
fi
