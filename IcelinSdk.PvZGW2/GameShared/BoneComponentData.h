#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E068
   RuntimeId:        11B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D14
   VfTable:          0000000142273510
   Address (Base):   00000001430BFF50
*/
#pragma pack(push, 16)
class BoneComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BoneComponentData) == 112);

}
