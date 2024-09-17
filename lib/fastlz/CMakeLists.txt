if (LIBFASTLZ_SHARED_LIBRARY)
    set(LIBRARY_TYPE SHARED)
else ()
    set(LIBRARY_TYPE STATIC)
endif ()

add_library(fastlz ${LIBRARY_TYPE} fastlz.c)
target_include_directories(fastlz PUBLIC .)
