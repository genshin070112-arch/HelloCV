# 1) 声明本工程需要的最低 CMake 版本（必须放在第一行）
cmake_minimum_required(VERSION 3.10)

# 2) 工程名 / 版本号 / 语言。定义后会自动产生
#    PROJECT_NAME、PROJECT_VERSION、PROJECT_SOURCE_DIR、PROJECT_BINARY_DIR
project(UnitConverter VERSION 1.0.0 LANGUAGES CXX)

# 3) set()：设置（自定义）变量。这里统一规定 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4) 让可执行文件统一生成到 <build>/bin 下，方便直接运行
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 5) 把 unitlib 子目录加进来：CMake 会去读 unitlib/CMakeLists.txt
add_subdirectory(unitlib)

# 6) 用 src/main.cpp 生成可执行文件 unit_converter
add_executable(unit_converter src/main.cpp)

# 7) 链接我们自己的库。
#    PRIVATE 表示“只有 unit_converter 自己需要 unitlib”
target_link_libraries(unit_converter PRIVATE unitlib)

# 8) 给 unit_converter 这个目标加编译期宏（等价于 g++ -D...）
#    注意 unitlib 的 include 目录是通过 PUBLIC 自动传过来的，这里不用再写
target_compile_definitions(unit_converter PRIVATE
    APP_NAME="UnitConverter"
    APP_VERSION="${PROJECT_VERSION}")

# 9) 安装规则：make install 时把可执行文件装到 <prefix>/bin
install(TARGETS unit_converter RUNTIME DESTINATION bin)
