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
  ResourceCompartment_Game                           = 3,
  ResourceCompartment_Dynamic_Begin_                 = 4,
  ResourceCompartment_Dynamic_Synchronized_Begin_    = 4,
  ResourceCompartment_Dynamic_Synchronized_End_      = 2004,
  ResourceCompartment_Dynamic_Nonsynchronized_Begin_ = 2005,
  ResourceCompartment_Dynamic_Nonsynchronized_End_   = 3005,
  ResourceCompartment_Dynamic_End_                   = 3005,
  ResourceCompartment_Count_                         = 3005,
  ResourceCompartment_Forbidden                      = 3005,
};

enum ResourceCompartmentType {
  ResourceCompartmentType_NonDynamic             = 0,
  ResourceCompartmentType_SynchronizedDynamic    = 1,
  ResourceCompartmentType_NonsynchronizedDynamic = 2,
  ResourceCompartmentType_Count_                 = 3,
};

}
