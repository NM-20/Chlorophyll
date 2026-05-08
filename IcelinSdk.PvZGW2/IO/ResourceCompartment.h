#pragma once

/** @brief Provides the declaration for the `ResourceCompartment` enumeration and all related types. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

enum ResourceCompartment : s16 {
  ResourceCompartment_First_                         = 0,
  ResourceCompartment_Static                         = 0,
  ResourceCompartment_Frontend                       = 1,
  ResourceCompartment_LoadingScreen                  = 2,
  ResourceCompartment_GameStatic                     = 3,
  ResourceCompartment_Game                           = 4,
  ResourceCompartment_Dynamic_Begin_                 = 5,
  ResourceCompartment_Dynamic_Synchronized_Begin_    = 5,
  ResourceCompartment_Dynamic_Synchronized_End_      = 2005,
  ResourceCompartment_Dynamic_Nonsynchronized_Begin_ = 2006,
  ResourceCompartment_Dynamic_Nonsynchronized_End_   = 3006,
  ResourceCompartment_Dynamic_End_                   = 3006,
  ResourceCompartment_Count_                         = 3006,
  ResourceCompartment_Forbidden                      = 3006,
};

enum ResourceCompartmentType {
  ResourceCompartmentType_NonDynamic             = 0,
  ResourceCompartmentType_SynchronizedDynamic    = 1,
  ResourceCompartmentType_NonsynchronizedDynamic = 2,
  ResourceCompartmentType_Count_                 = 3,
};

}
