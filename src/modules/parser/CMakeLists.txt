set(PARSER_SOURCES
        parser.cpp
)

add_library(ParserLibrary STATIC ${PARSER_SOURCES})

target_include_directories(ParserLibrary
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/interfaces  # For Networking.hpp interface
)

# Link NetworkingLib to CoreLib b/c it likely uses core utilities
target_link_libraries(ParserLibrary PRIVATE CoreLibrary)