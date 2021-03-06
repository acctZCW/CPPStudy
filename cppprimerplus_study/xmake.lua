add_rules("mode.debug", "mode.release")
set_languages("c11","cxx11")

target("L3E3")
    set_kind("binary")
    add_files("src/lesson3/exercise3.cpp")
    add_defines("L3E3")

target("L3E4")
    set_kind("binary")
    add_files("src/lesson3/exercise4.cpp")
    add_defines("L3E4")

target("L3E5")
    set_kind("binary")
    add_files("src/lesson3/exercise5.cpp")
    add_defines("L3E5")

target("L4E4")
    set_kind("binary")
    add_files("src/lesson4/exercise4.cpp")
    add_defines("L4E4")

target("L4E5")
    set_kind("binary")
    add_files("src/lesson4/exercise5.cpp")
    add_defines("L4E5")

target("L4E9")
    set_kind("binary")
    add_files("src/lesson4/exercise9.cpp")
    add_defines("L4E9")

target("L6E1")
    set_kind("binary")
    add_files("src/lesson6/exercise1.cpp")
    add_defines("L6E1")

target("L6E4")
    set_kind("binary")
    add_files("src/lesson6/exercise4.cpp")
    add_defines("L6E4")

target("L6E6")
    set_kind("binary")
    add_files("src/lesson6/exercise6.cpp")
    add_defines("L6E6")

target("L6E9")
    set_kind("binary")
    add_files("src/lesson6/exercise9.cpp")
    add_defines("L6E9")

target("L7E3")
    set_kind("binary")
    add_files("src/lesson7/exercise3.cpp")
    add_defines("L7E3")

target("L7E4")
    set_kind("binary")
    add_files("src/lesson7/exercise4.cpp")
    add_defines("L7E4")

target("L7E5")
    set_kind("binary")
    add_files("src/lesson7/exercise5.cpp")
    add_defines("L7E5")

target("L7E6")
    set_kind("binary")
    add_files("src/lesson7/exercise6.cpp")
    add_defines("L7E6")

target("L8E2")
    set_kind("binary")
    add_files("src/lesson8/exercise2.cpp")
    add_defines("L8E2")

target("L8E4")
    set_kind("binary")
    add_files("src/lesson8/exercise4.cpp")
    add_defines("L8E4")

target("L8E7")
    set_kind("binary")
    add_files("src/lesson8/exercise7.cpp")
    add_defines("L8E7")

target("L9E1")
    set_kind("binary")
    add_files("src/lesson9/exercise1.cpp")
    add_files("src/lesson9/golf.cpp")
    add_includedirs("src/lesson9")
    add_defines("L9E1")

target("L9E3")
    set_kind("binary")
    add_files("src/lesson9/exercise3.cpp")
    add_defines("L9E3")

target("L9E4")
    set_kind("binary")
    add_files("src/lesson9/exercise4.cpp")
    add_files("src/lesson9/sales.cpp")
    add_includedirs("src/lesson9")
    add_defines("L9E4")

target("L10E1")
    set_kind("binary")
    add_files("src/lesson10/exercise1.cpp")
    add_defines("L10E1")

target("L10E2")
    set_kind("binary")
    add_files("src/lesson10/exercise2.cpp")
    add_defines("L10E2")
    
target("L10E5")
    set_kind("binary")
    add_files("src/lesson10/exercise5.cpp")
    add_defines("L10E5")

target("L10E6")
    set_kind("binary")
    add_files("src/lesson10/exercise6.cpp")
    add_defines("L10E6")

target("L10E7")
    set_kind("binary")
    add_files("src/lesson10/exercise7.cpp")
    add_defines("L10E7")

--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro defination
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--

