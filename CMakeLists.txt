add_executable(Elevator
  main.cpp
  Elevator.cpp
  Elevator.h)

target_include_directories(Elevator
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(Elevator PROPERTIES
  FOLDER "${PROJECT_NAME}/Elevator"
  OUTPUT_NAME ${PROJECT_NAME}-Elevator
  PROJECT_LABEL "Elevator")
