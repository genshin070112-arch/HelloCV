# 1) set() 把源文件列表存进变量，以后加文件只改这一行
set(UNITLIB_SOURCES
    src/unitlib.cpp
)

# 2) 生成静态库 libunitlib.a
#    写成 add_library(unitlib SHARED ...) 则生成动态库 libunitlib.so
add_library(unitlib STATIC ${UNITLIB_SOURCES})

# 3) 头文件目录：
#    PUBLIC = 我自己编译要用，链接我的目标（unit_converter）也自动要用
#    这样根目录就不用再写 target_include_directories 了
target_include_directories(unitlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 4) 只给编译 unitlib 本身用的宏，不会传给使用者（PRIVATE）
target_compile_definitions(unitlib PRIVATE UNITLIB_INTERNAL=1)

# 5) 安装：库文件 -> <prefix>/lib，头文件 -> <prefix>/include
install(TARGETS unitlib ARCHIVE DESTINATION lib)
install(FILES include/unitlib.h DESTINATION include)
