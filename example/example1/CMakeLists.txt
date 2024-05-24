add_executable(  ChihuahuaExample1 main.cpp
                )

target_include_directories( ChihuahuaExample1 PUBLIC 
                            "${PROJECT_SOURCE_DIR}/include"
                            Chihuahua
                            )

target_link_libraries(  ChihuahuaExample1 PUBLIC Chihuahua pthread)
