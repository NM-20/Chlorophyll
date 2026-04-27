#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/UIAnalogInput.h>
#include <IcelinSdk.PvZGW2/GameShared/InputConceptIdentifiers.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B538
   RuntimeId:        0F59
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C93A8
   Default Value:    000000014284B550
*/
#pragma pack(push, 4)
struct UIAnalogInputMapData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIAnalogInput AnalogInput; /* 0x0000 */
  InputConceptIdentifiers XAxisConceptIdentifier; /* 0x0004 */
  InputConceptIdentifiers YAxisConceptIdentifier; /* 0x0008 */
  FB_FLOAT32 OverrideDeadZone; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIAnalogInputMapData) == 16);

}
