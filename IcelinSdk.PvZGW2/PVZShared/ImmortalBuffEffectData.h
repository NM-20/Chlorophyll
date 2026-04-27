#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C9C8
   RuntimeId:        273E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0904
   VfTable:          00000001423663B0
   Address (Base):   00000001430F6670
*/
#pragma pack(push, 8)
class ImmortalBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ImmortalBuffEffectData) == 24);

}
