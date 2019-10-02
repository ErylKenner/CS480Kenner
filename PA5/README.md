# PA5: ASSIMP

This project uses ASSIMP to load and display objects.

## Dependencies

```bash
sudo apt-get install libglew-dev libglm-dev libsdl2-dev
sudo apt-get install libassimp-dev
```

## Running the Project

```bash
mkdir build
cd build
cmake ..
make
./Tutorial -v ../shaders/vertexShader.txt -f ../shaders/fragmentShader.txt -o ../obj/Tray.obj
```
## Notes

The model spins so you can see it from all sides. Each vertex is assigned a color between black and red. The model file must be specified using the option -o.