# CMakeList.txt: проект CMake для Speedoku; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
if(FOO_USE_EXTERNAL_JSON)
  find_package(nlohmann_json 3.2.0 REQUIRED)
else()
  set(JSON_BuildTests OFF CACHE INTERNAL "")
  add_subdirectory(nlohmann_json)
endif()
add_executable (Speedoku "Speedoku.cpp" "Speedoku.h" "ConsoleUI/ManagerUI.h" "ConsoleUI/OI.h " "TimeRankings/BestTimes.h")
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Speedoku PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
