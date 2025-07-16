# Define the source files for the core library
# It's good practice to list files explicitly or use globbing carefully (see notes below)
set(CORE_SOURCES
    # types/UserId.cpp # Assuming .cpp files for types if they exist
    # utils/StringHelper.cpp
    # memory/SmartPointers.cpp
    core.cpp
)

# Create a static library target for core components
add_library(CoreLibrary STATIC ${CORE_SOURCES})

# Specify include directories for CoreLibrary itself
target_include_directories(CoreLibrary
    # PRIVATE for headers only used internally by CoreLibrary's .cpp files
    PRIVATE
        # ${CMAKE_CURRENT_SOURCE_DIR}/types
        # ${CMAKE_CURRENT_SOURCE_DIR}/utils
        # ${CMAKE_CURRENT_SOURCE_DIR}/memory
    # PUBLIC for headers that other targets (consumers of CoreLibrary) will need
    PUBLIC
        # ${CMAKE_CURRENT_SOURCE_DIR}/types # E.g., UserId.hpp might be public API
        # ${CMAKE_CURRENT_SOURCE_DIR}/utils # E.g., StringHelper.hpp might be public API
)

# Optional: Define standard for this specific target if different
# target_compile_features(CoreLibrary PUBLIC cxx_std_17)

# # Optional: Install rules for the core library (if it's a reusable component)
# install(TARGETS CoreLibrary EXPORT MyAwesomeProjectTargets
#     LIBRARY DESTINATION lib
#     ARCHIVE DESTINATION lib
#     RUNTIME DESTINATION bin # Not applicable for static lib, but good to know
#     PUBLIC_HEADER DESTINATION include/my_awesome_project/core # Install public headers
# )