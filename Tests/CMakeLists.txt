# CMakeList.txt: проект CMake для Speedoku; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

project(Tests)

# Добавьте источник в исполняемый файл этого проекта.
#add_executable (Speedoku "Speedoku.cpp" "Speedoku.h" "GameLogic/cell.h" "GameLogic/cell.cpp" "GameLogic/grid.h" "GameLogic/grid.cpp" "GameLogic/grid_generator.h" "GameLogic/grid_generator.cpp" "GameLogic/game_timer.h" "GameLogic/game_timer.cpp" "Tests/game_logic_t.cpp" "Tests/game_logic_t.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Speedoku PROPERTY CXX_STANDARD 20)
endif()


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# TODO: Добавьте тесты и целевые объекты, если это необходимо.


enable_testing()

add_executable(
  game_logic_t
  game_logic_t.cpp
  game_logic_t.h
)
target_link_libraries(
  game_logic_t GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(game_logic_t)