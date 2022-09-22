cmake_minimum_required( VERSION "2.6.4" )

project( pandapp CXX C )

include_directories( include )

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3" )

set( CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR} )

set( PANDAPP_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set( PANDAPP_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin )
set( PANDAPP_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib )

add_subdirectory( src )
add_subdirectory( test )
#add_subdirectory( examples )
