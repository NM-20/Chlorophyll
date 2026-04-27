#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FF48
   RuntimeId:        1E37
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10DD
   VfTable:          000000014231D3C0
   Address (Base):   000000014310A0B0
*/
#pragma pack(push, 8)
class FloatProvider_CurrentHealthPercent : public PVZFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_CurrentHealthPercent) == 16);

}
