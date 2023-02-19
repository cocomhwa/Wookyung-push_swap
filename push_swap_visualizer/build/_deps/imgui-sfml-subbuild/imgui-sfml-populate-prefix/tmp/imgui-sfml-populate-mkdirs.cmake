# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/tmp"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src"
  "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
