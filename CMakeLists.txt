cmake_minimum_required(VERSION 3.0.2)
project(plugin_study)

find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
)

catkin_package(
 INCLUDE_DIRS include
 LIBRARIES plugin_study
 CATKIN_DEPENDS pluginlib roscpp
 DEPENDS system_lib
)

include_directories(
  include ##추가
  ${catkin_INCLUDE_DIRS}
)

add_library(my_plugins
  plugins/info_plugin.cpp
  plugins/warn_plugin.cpp
  plugins/error_plugin.cpp
)
add_dependencies(my_plugins ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(my_plugins ${catkin_LIBRARIES})

add_executable(plugin_test src/main.cpp)
target_link_libraries(plugin_test ${catkin_LIBRARIES})


install(TARGETS
    my_plugins
    ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
    LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
    RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)

install(FILES plugins.xml
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)