if (LIBBINARYIO_SHARED_LIBRARY)
    set(LIBRARY_TYPE SHARED)
else ()
    set(LIBRARY_TYPE STATIC)
endif ()

add_library(binaryio ${LIBRARY_TYPE} src/binary_io/binary_io.cpp)
target_include_directories(binaryio PUBLIC include)
