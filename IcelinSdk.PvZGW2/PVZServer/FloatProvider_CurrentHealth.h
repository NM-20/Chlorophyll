#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FF28
   RuntimeId:        1E35
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10DC
   VfTable:          000000014231D2E8
   Address (Base):   000000014310A110
*/
#pragma pack(push, 8)
class FloatProvider_CurrentHealth : public PVZFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_CurrentHealth) == 16);

}
