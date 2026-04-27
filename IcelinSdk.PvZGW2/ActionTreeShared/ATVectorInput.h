#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputProperty.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428325F8
   RuntimeId:        0054
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08AF
   VfTable:          00000001421E3130
   Address (Base):   00000001430DD0D0
*/
#pragma pack(push, 16)
class ATVectorInput : public ATInputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 DefaultValue; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATVectorInput) == 48);

}
