add_executable(MyProject main.cpp)

target_link_libraries(MyProject
    PRIVATE
        CoreLibrary
        NetworkingLibrary
        ParserLibrary
)