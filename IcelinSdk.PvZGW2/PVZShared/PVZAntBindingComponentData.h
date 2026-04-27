#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAntBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863E88
   RuntimeId:        2185
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D52
   VfTable:          0000000142352CC8
   Address (Base):   00000001430E61C0
*/
#pragma pack(push, 16)
class PVZAntBindingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZAntBinding Binding; /* 0x0070 */
  char pad_00AC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZAntBindingComponentData) == 176);

}
