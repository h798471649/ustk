/****************************************************************************
*
* This file is part of the UsTk software.
* Copyright (C) 2014 by Inria. All rights reserved.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License ("GPL") as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
* See the file COPYING at the root directory of this source
* distribution for additional information about the GNU GPL.
*
* This software was developed at:
* INRIA Rennes - Bretagne Atlantique
* Campus Universitaire de Beaulieu
* 35042 Rennes Cedex
* France
* http://www.irisa.fr/lagadic
*
* If you have questions regarding the use of this file, please contact the
* authors at Alexandre.Krupa@inria.fr
*
* This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
* WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*
*
* Authors:
* Marc Pouliquen
*
*****************************************************************************/

//std includes
#include <iostream>

//visp includes
#include <visp3/core/vpConfig.h>

//ustk includes
#include<visp3/ustk_core/usImagePreScan3DSettings.h>

/**
* Default constructor, all parameters set de default values.
*/
usImagePreScan3DSettings::usImagePreScan3DSettings() : usImage3DSettings(), m_axialResolution(0.0)
{

}

/**
* Full settings constructor.
*/
usImagePreScan3DSettings::usImagePreScan3DSettings(double probeRadius, double scanLinePitch, bool isProbeConvex, double motorRadius, double framePitch, bool isMotorConvex, double axial_resolution) :
  usImage3DSettings(probeRadius, motorRadius, scanLinePitch, framePitch, isProbeConvex, isMotorConvex), m_axialResolution(axial_resolution)
{

}

/**
* Destructor.
*/
usImagePreScan3DSettings::~usImagePreScan3DSettings() {}

/**
* Assignement operator.
* @param other usImagePreScan3DSettings to copy.
*/
usImagePreScan3DSettings& usImagePreScan3DSettings::operator=(const usImagePreScan3DSettings& other)
{
  usImageSettings::operator=(other);
  m_axialResolution = other.getAxialResolution();

  return *this;
}

/**
* Comparaison operator.
* @param other usImagePreScan3DSettings to compare with.
*/
bool usImagePreScan3DSettings::operator==(const usImagePreScan3DSettings& other)
{
  return(usImage3DSettings::operator==(other) &&
    m_axialResolution == other.getAxialResolution());
}

/**
* Axial resolution setter.
* @param axialResolution Axial resloution to assign to the settings.
*/
void usImagePreScan3DSettings::setAxialResolution(const double axialResolution)
{
  m_axialResolution = axialResolution;
}

/**
* Width resolution getter.
*/
double usImagePreScan3DSettings::getAxialResolution() const
{
  return (m_axialResolution);
}



