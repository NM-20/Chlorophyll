#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FCB8
   RuntimeId:        133F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECB
   VfTable:          0000000142277088
   Address (Base):   0000000143110290
*/
#pragma pack(push, 8)
class MorphBeard : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MorphBeard) == 24);

}
