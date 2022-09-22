cmake_minimum_required( VERSION "2.6.4" )

project( pandapp )

set( SOURCE_FILES main.cc )

add_executable( pandapp ${SOURCE_FILES} )

install( TARGETS pandapp DESTINATION bin )