cmake_minimum_required(VERSION 3.10)
project(HelloWorldOpenCV)

# Encontra o pacote OpenCV
find_package(OpenCV REQUIRED)

# Inclui os diretórios do OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# Cria o executável
add_executable(main_app main.cpp)

# Linka as bibliotecas do OpenCV ao executável
target_link_libraries(main_app ${OpenCV_LIBS})