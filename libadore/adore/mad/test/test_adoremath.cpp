/********************************************************************************
 * Copyright (C) 2017-2020 German Aerospace Center (DLR). 
 * Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
 *
 * This program and the accompanying materials are made available under the 
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0 
 *
 * Contributors: 
 *   Thomas Lobig - initial API and implementation
 ********************************************************************************/

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "adore/mad/adoremath.h"

TEST_CASE( "testing adore min", "[adoremath]" ) {
    REQUIRE( adore::mad::min<int>(1,2,3,4) == 1 );
}