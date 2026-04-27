#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A208
   RuntimeId:        0E56
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7218
*/
enum ProfileOptionsType
{
  GstAudio = 0,
  GstRender = 1,
  GstInput = 2,
  GstAI = 3,
  GstGameplay = 4,
  GstPlayerProfile = 5,
  GstPersistence = 6,
  GstBinary = 7,
  GstKeyBinding = 8,
  GstCount = 9,
};

}
