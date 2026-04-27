#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839DD8
   RuntimeId:        0718
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBB00
*/
enum LocationSelection
{
  LsEmitter = 0,
  LsParticle = 1,
  LsParticlePlusVelocity = 2,
  LsParticleMinusVelocity = 3,
  LsSource = 4,
  LsTarget = 5,
  LsOther = 6,
};

}
