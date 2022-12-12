#!/bin/bash
wget -P /tmp https://github.com/Nginika/alx-low_level_programming/blob/2b90de0dc61631bfa149249b6ec0116a59b77539/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
