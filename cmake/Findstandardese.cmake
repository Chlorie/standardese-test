find_program(STANDARDESE_EXECUTABLE
    NAMES standardese
    DOC "Path to standardese executable")

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(standardese
    "Failed to find standardese executable"
    STANDARDESE_EXECUTABLE)
