#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FC98
   RuntimeId:        133D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3E
   VfTable:          0000000142277098
   Address (Base):   00000001431102F0
*/
#pragma pack(push, 8)
class MorphHair : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MorphHair) == 24);

}
