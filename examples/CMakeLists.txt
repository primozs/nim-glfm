#
# Copyright (C) The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compli    ance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# https://developer.android.com/studio/projects/configure-cmake
cmake_minimum_required(VERSION 3.22.1)

# build native_app_glue as a static lib
set(${CMAKE_C_FLAGS}, "${CMAKE_C_FLAGS}")
add_library(native_app_glue STATIC
    ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)

# now build app's shared lib
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -Wall -Werror")

# Export ANativeActivity_onCreate(),
# Refer to: https://github.com/android-ndk/ndk/issues/381.
set(CMAKE_SHARED_LINKER_FLAGS
    "${CMAKE_SHARED_LINKER_FLAGS} -v -u ANativeActivity_onCreate")

set(__arm__)

# include_directories( ${PROJECT_SOURCE_DIR})
# add_library( mainnim SHARED IMPORTED )

# file(GLOB SOURCES "src/*.h")
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/*.c")

# set_target_properties( live555 PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/../jniLibs/live555/lib/${ANDROID_ABI}/live555.so)

add_library(mainnim SHARED
        ${SOURCES}
#        nimbase.h
#        glfm_platform.h
#        glfm.h
#        file_compat.h
)
# add_library(mainnim SHARED
#        "@m..@s..@s..@s..@s..@s..@s..@s.nimble@spkgs2@sopengl-1.2.9-87ece9f3a9f99d17332b50885e15a4dcb18c51b5@sopengl.nim.c"
#         @mmain.nim.c
#         glfm_platform_android.c

#         #stdlib_allocators.nim.c
#         #stdlib_assertions.nim.c
# #        stdlib_io.nim.c
#         #stdlib_os.nim.c
#         #stdlib_pathnorm.nim.c
#         #stdlib_strutils.nim.c
# #        stdlib_system.nim.c
#         #stdlib_times.nim.c
#         )

target_include_directories(mainnim PRIVATE
    ${ANDROID_NDK}/sources/android/native_app_glue)

# add lib dependencies
target_link_libraries(mainnim
    android
    native_app_glue
    EGL
    GLESv2
    log
    )
