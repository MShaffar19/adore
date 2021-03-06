#********************************************************************************
#* Copyright (C) 2017-2020 German Aerospace Center (DLR). 
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
#*
#* This program and the accompanying materials are made available under the 
#* terms of the Eclipse Public License 2.0 which is available at
#* http://www.eclipse.org/legal/epl-2.0.
#*
#* SPDX-License-Identifier: EPL-2.0 
#*
#* Contributors: 
#*   {name} - initial API and implementation
#********************************************************************************

cmake_minimum_required(VERSION 3.13)

project(adore_sim VERSION 0.0.1
             DESCRIPTION "simulation abstraction classes as part of the adore framework"
             HOMEPAGE_URL "${adore_REPOSITORY_URL}/libadore/adore/sim")

include(GNUInstallDirs)

# add_library(adore_sim STATIC)
add_library(adore_sim STATIC)

target_sources(adore_sim PRIVATE 
  src/mapemgenerator.cpp
  src/tlstateparser.cpp
  src/tlstatemanager.cpp)

include(../../external/xercesc.cmake)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
            ${xercesc_include})

target_link_libraries(adore_sim PUBLIC adore_mad adore_fun adore_env xerces-c)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
