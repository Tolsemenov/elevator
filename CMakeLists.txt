add_executable(elevator
  main.cpp)

target_include_directories(elevator
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(elevator PROPERTIES
  FOLDER "${PROJECT_NAME}/elevator"
  OUTPUT_NAME ${PROJECT_NAME}-elevator
  PROJECT_LABEL "elevator")
