# force a build clean every time
rm ~/.cache/nim/main_d/*
rm android_triangle/app/src/main/cpp/*

# /p/Nim/bin/nim c -f --cpu:arm --os:android -c -d:androidNDK --noMain:on main.nim

# nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
# --cpu:arm --os:android --noMain:on \
# --nimcache:android_triangle/app/src/main/cpp main.nim

nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
--cpu:arm64 --os:android --noMain:on \
--nimcache:android_triangle/app/src/main/cpp main.nim

# nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
# --cpu:arm --os:android --noMain:on \
# --nimcache:android_triangle/app/src/main/cpp/arm main.nim

# nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
# --cpu:arm64 --os:android --noMain:on \
# --nimcache:android_triangle/app/src/main/cpp/arm64 main.nim

# nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
# --cpu:i386 --os:android --noMain:on \
# --nimcache:android_triangle/app/src/main/cpp/x86 main.nim

# nim c -c -d:noSignalHandler -d:danger -d:release -d:androidNDK \
# --cpu:amd64 --os:android --noMain:on \
# --nimcache:android_triangle/app/src/main/cpp/x86_64 main.nim



cp android_triangle/CMakeLists.txt android_triangle/app/src/main/cpp/

cp ~/.cache/nim/main_d/*.c android_triangle/app/src/main/cpp/
cp nimbase.h android_triangle/app/src/main/cpp/
cp file_compat.h android_triangle/app/src/main/cpp/
cp ../glfm/include/glfm.h android_triangle/app/src/main/cpp/
cp ../glfm/src/glfm_platform.h android_triangle/app/src/main/cpp/
cp ../glfm/src/glfm_platform_android.c android_triangle/app/src/main/cpp/
mkdir -p android_triangle/app/src/main/assets
cp -r assets/* android_triangle/app/src/main/assets

