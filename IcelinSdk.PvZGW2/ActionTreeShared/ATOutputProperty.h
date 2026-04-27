#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATProperty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428324B8
   RuntimeId:        0040
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0895
   VfTable:          00000001421E31D0
   Address (Base):   00000001430D1220
*/
#pragma pack(push, 8)
class ATOutputProperty : public ATProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATOutputProperty) == 16);

}
