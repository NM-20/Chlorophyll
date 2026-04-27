#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SimpleMovementActionBaseData.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraMovementActionMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BD58
   RuntimeId:        0FD2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5D
   VfTable:          00000001422680A0
   Address (Base):   0000000143112DB0
*/
#pragma pack(push, 8)
class CameraActionData : public SimpleMovementActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CameraMovementActionMode ActionMode; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraActionData) == 40);

}
