# CMakeList.txt: проект CMake для Speedoku; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Speedoku "Speedoku.cpp" "Speedoku.h" "GameLogic/cell.h" "GameLogic/cell.cpp" "GameLogic/grid.h" "GameLogic/grid.cpp" "GameLogic/grid_generator.h" "GameLogic/grid_generator.cpp" "GameLogic/game_timer.h" "GameLogic/game_timer.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Speedoku PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

#enable_testing()

#add_test(GameLogicTests game_logic_test ./Tests/game_logic_t.cpp ./Tests/game_logic_t.h)

#add_test(GameLogicTests game_logic_test)