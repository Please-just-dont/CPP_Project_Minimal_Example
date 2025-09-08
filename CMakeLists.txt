cmake_minimum_required(VERSION 3.22)






set(CMAKE_CXX_SCAN_FOR_MODULES TRUE)




set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_EXTENSIONS OFF)





project(my_project
VERSION 1.0
  LANGUAGES CXX C
)






set(MAIN_SOURCES 
${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)



add_executable(main ${MAIN_SOURCES})




target_sources(main
  PUBLIC
   FILE_SET CXX_MODULES FILES



${CMAKE_CURRENT_SOURCE_DIR}/my_json_module.cxx

)





add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Glaze)

target_link_libraries(main PUBLIC glaze::glaze)







