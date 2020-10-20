# 🔊 uTag
## Description
  App to read and write tags of audio files with Qt GUI and Taglib

## How to use

### Must Have (dependencies)
- CMake 3.18.2 or above - https://cmake.org/download
- Qt 5.15 or above - https://www.qt.io/download

### Building
##### First step
If you do not have ```CMAKE_PREFIX_PATH``` you can fix it in 2 ways:
- go into ```utag/CMakeLists.txt``` and add ```set(CMAKE_PREFIX_PATH "/your/path/to/qt")```
- or you can just write in terminal ```export CMAKE_PREFIX_PATH=/your/path/to/qt```
##### Second step
    ./build.sh
### Run
    ./utag


## App features
- Allows to edit different tags of audio files 
- Supports ```.mp3 .flac .wav .ogg```  audio formats
- Opens the directory with the audio files through the GUI
- Supports dark and light themes for customizing the look and feel of the editor's entire user interface


## Tech/framework used
 - CMake
 - Qt
 - Taglib
