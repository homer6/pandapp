cmake_minimum_required( VERSION "2.6.4" )

project( pandapp_tests )

set( SOURCE_FILES main.cc )

add_executable( pandapp_tests ${SOURCE_FILES} )

install( TARGETS pandapp_tests DESTINATION bin )