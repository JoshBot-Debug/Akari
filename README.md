# How to

### Setup

Initialize all submodules
```bash
# You may need to add the submodule
git submodule add -b docking https://github.com/ocornut/imgui.git vendor/imgui

git submodule update --init --recursive
cd vendor/imgui
git checkout docking
cd ../..
```

Rename the project (optional)
Search for "Akari" in .vscode/\* and CMakeLists.txt and change it to what ever you want
then delete your build folder and build it again.

Hit F5 (build and run) ;)