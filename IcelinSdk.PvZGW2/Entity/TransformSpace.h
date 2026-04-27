#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B998
   RuntimeId:        0906
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1176
   VfTable:          000000014220AB30
   Address (Base):   00000001430DC7D0
*/
#pragma pack(push, 16)
class TransformSpace : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformSpace) Parent; /* 0x0010 */
  FB_UINT32 Id; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform LocalTransform; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TransformSpace) == 96);

}
