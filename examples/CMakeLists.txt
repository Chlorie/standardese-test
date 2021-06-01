function (add_example TGT)
    add_executable(${TGT} "${TGT}.cpp")
    target_set_output_dirs(${TGT})
    target_link_libraries(${TGT} PRIVATE project_options standardese-test::standardese-test)
endfunction ()

add_example(playground)
