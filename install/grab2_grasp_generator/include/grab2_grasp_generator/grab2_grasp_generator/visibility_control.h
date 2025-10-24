// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_GRASP_GENERATOR__VISIBILITY_CONTROL_H_
#define GRAB2_GRASP_GENERATOR__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define GRAB2_GRASP_GENERATOR_EXPORT __attribute__ ((dllexport))
    #define GRAB2_GRASP_GENERATOR_IMPORT __attribute__ ((dllimport))
  #else
    #define GRAB2_GRASP_GENERATOR_EXPORT __declspec(dllexport)
    #define GRAB2_GRASP_GENERATOR_IMPORT __declspec(dllimport)
  #endif
  #ifdef GRAB2_GRASP_GENERATOR_BUILDING_LIBRARY
    #define GRAB2_GRASP_GENERATOR_PUBLIC GRAB2_GRASP_GENERATOR_EXPORT
  #else
    #define GRAB2_GRASP_GENERATOR_PUBLIC GRAB2_GRASP_GENERATOR_IMPORT
  #endif
  #define GRAB2_GRASP_GENERATOR_PUBLIC_TYPE GRAB2_GRASP_GENERATOR_PUBLIC
  #define GRAB2_GRASP_GENERATOR_LOCAL
#else
  #define GRAB2_GRASP_GENERATOR_EXPORT __attribute__ ((visibility("default")))
  #define GRAB2_GRASP_GENERATOR_IMPORT
  #if __GNUC__ >= 4
    #define GRAB2_GRASP_GENERATOR_PUBLIC __attribute__ ((visibility("default")))
    #define GRAB2_GRASP_GENERATOR_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define GRAB2_GRASP_GENERATOR_PUBLIC
    #define GRAB2_GRASP_GENERATOR_LOCAL
  #endif
  #define GRAB2_GRASP_GENERATOR_PUBLIC_TYPE
#endif

#endif  // GRAB2_GRASP_GENERATOR__VISIBILITY_CONTROL_H_
