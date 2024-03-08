##########################################
########## Global Configuration ##########
##########################################

# Allow for relative headers import
include_directories(${CMAKE_SOURCE_DIR}/src)

# If building on Windows, static library linking to avoid dll nightmare
if(WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

# Check for SFML correctly installed
find_package(SFML REQUIRED COMPONENTS graphics window system)

##########################################
############## Main Section ##############
##########################################

# Add main target, final executable
add_executable(
    main

    main.cpp
    Coordonnees.hpp
    Coordonnees.cpp
        Joueur.cpp
        Joueur.hpp
        Action.cpp
        Action.hpp
    Board.cpp
    Board.hpp
        Couleur.hpp
)

add_subdirectory(Pieces)

if (WIN32)
    target_link_libraries(main -static sfml-graphics sfml-window sfml-system)
else()
    target_link_libraries(main sfml-graphics sfml-window sfml-system)
endif()

# Enable this option for final release. Disable console & stdout

# target_link_options(main PRIVATE -mwindows)

##########################################
############# Client Section #############
##########################################

add_executable(
    main_client
)

add_subdirectory(Client)
add_subdirectory(Interface)

if (WIN32)
    target_link_libraries(main_client -static sfml-graphics sfml-window sfml-system)
else()
    target_link_libraries(main_client sfml-graphics sfml-window sfml-system)
endif()

add_custom_command(
    TARGET main_client PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:main_client>/assets
)