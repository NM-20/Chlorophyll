#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraEntityBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DC40
   RuntimeId:        1175
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B40
   VfTable:          00000001422739D8
   Address (Base):   00000001430BFE90
*/
#pragma pack(push, 16)
class CameraEntityData : public CameraEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Fov; /* 0x00A0 */
  FB_FLOAT32 NearPlane; /* 0x00A4 */
  FB_FLOAT32 FarPlane; /* 0x00A8 */
  char pad_00AC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(CameraEntityData) == 176);

}
