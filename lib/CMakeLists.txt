add_library(standardese-test INTERFACE)
add_library(standardese-test::standardese-test ALIAS standardese-test)

target_include_directories(standardese-test
INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

if (ENABLE_INSTALL)
    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
        "${PROJECT_BINARY_DIR}/standardese-testConfigVersion.cmake"
        VERSION ${PACKAGE_VERSION}
        COMPATIBILITY SameMajorVersion
    )

    install(TARGETS standardese-test
        EXPORT standardese-testTargets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        PUBLIC_HEADER DESTINATION include
    )

    include(CMakePackageConfigHelpers)
    configure_package_config_file(
        "${PROJECT_SOURCE_DIR}/cmake/standardese-testConfig.cmake.in"
        "${PROJECT_BINARY_DIR}/standardese-testConfig.cmake"
        INSTALL_DESTINATION lib/cmake/standardese-test
    )

    export(TARGETS standardese-test NAMESPACE standardese-test:: FILE standardese-testConfig.cmake)
    install(EXPORT standardese-testTargets NAMESPACE standardese-test:: DESTINATION lib/cmake/standardese-test)
    install(FILES "${PROJECT_BINARY_DIR}/standardese-testConfigVersion.cmake"
                  "${PROJECT_BINARY_DIR}/standardese-testConfig.cmake"
            DESTINATION lib/cmake/standardese-test)
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/lib/include/ DESTINATION include)
endif ()
