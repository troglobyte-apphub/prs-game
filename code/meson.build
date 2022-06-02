code_lib = shared_library('code_lib',
    'program.cpp',
    include_directories: '.',
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('prs-game',
    'main.cpp',
    dependencies: [code_dep],
    install: true)
