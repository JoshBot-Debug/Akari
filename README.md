# Akari - A Vulkan + ImGui template
Based on StudioCherno/Walnut.
It was not setup for linux and had some outdated code. Akari is up to date as of June 22 2025 & I removed everything that was unnecessary, this is just an empty Vulkan & ImGui template.

### Setup

Initialize all submodules
```bash
git submodule update --init --recursive
cd vendor/imgui
git checkout docking
cd ../..

# Incase you screw up the imgui submodule
# You may need to add the submodule again
git submodule add -b docking https://github.com/ocornut/imgui.git vendor/imgui
```

Rename the project (optional)
Search for "Akari" in .vscode/\* and CMakeLists.txt and change it to what ever you want
then delete your build folder and build it again.

Hit F5 (build and run) ;)