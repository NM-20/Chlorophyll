#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E088
   RuntimeId:        11B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D99
   VfTable:          0000000142273478
   Address (Base):   00000001430D61F0
*/
#pragma pack(push, 16)
class GroupComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(GroupComponentData) == 112);

}
