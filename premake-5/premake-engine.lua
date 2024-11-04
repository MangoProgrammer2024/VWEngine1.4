workspace "VWEngine1.4.sln"
 configurations { "Debug", "Release" };
 platforms { "x64", "x86" };

project "VWEngine1.4.sln"
 kind "C++Application"
 language "C++"
 files { "**.cpp", "**.c", "**.lua", "**.h", "**.hpp, "**.py", "**.def", "**.png", "**.jpg", "**.vwi", "**.tga", "**.dll", "**.shader",
  "**.bat", "**.cmd", "**.map", "**.gsrc }

  filter "configurations: Debug, Release"
   define { "DEBUG", "RELEASE" };
   symbols "On"

  filter "configurations: Release"
   defines { "NDEBUG" }
   optimize "On"
