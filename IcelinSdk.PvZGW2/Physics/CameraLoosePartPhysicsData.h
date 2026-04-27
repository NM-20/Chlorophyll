#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/LoosePartPhysicsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851420
   RuntimeId:        146A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E44
   VfTable:          000000014227F588
   Address (Base):   000000014310F270
*/
#pragma pack(push, 8)
class CameraLoosePartPhysicsData : public LoosePartPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Scale; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CameraLoosePartPhysicsData) == 32);

}
