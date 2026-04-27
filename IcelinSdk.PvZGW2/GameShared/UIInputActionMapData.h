#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>
#include <IcelinSdk.PvZGW2/GameShared/InputConceptIdentifiers.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B500
   RuntimeId:        0F57
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C93C8
   Default Value:    000000014284B518
*/
#pragma pack(push, 4)
struct UIInputActionMapData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIInputAction InputAction; /* 0x0000 */
  InputConceptIdentifiers ConceptIdentifier; /* 0x0004 */
  FB_FLOAT32 OverrideRepeatDelaySec; /* 0x0008 */
  FB_FLOAT32 OverrideRepeatSpeedSec; /* 0x000C */
  FB_BOOLEAN AllowRepeat; /* 0x0010 */
  char pad_0011[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(UIInputActionMapData) == 20);

}
