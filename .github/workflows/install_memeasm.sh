#!/usr/bin/bash

cd $(mktemp -d)

git clone https://github.com/kammt/MemeAssembly.git
cd MemeAssembly

sudo make install
