set(NETWORKING_SOURCES
        node.cpp
)

add_library(NetworkingLibrary STATIC ${NETWORKING_SOURCES})

target_include_directories(NetworkingLibrary
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/interfaces  # For Networking.hpp interface
)

# Link NetworkingLib to CoreLib b/c it likely uses core utilities
target_link_libraries(NetworkingLibrary PRIVATE CoreLibrary)