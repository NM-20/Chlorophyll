#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BaseShapeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B608
   RuntimeId:        08D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096E
   VfTable:          000000014220AEE0
   Address (Base):   00000001430B59B0
*/
#pragma pack(push, 8)
class VectorShapeData : public BaseShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) Points; /* 0x0018 */
  FB_FLOAT32 Tension; /* 0x0020 */
  FB_BOOLEAN IsClosed; /* 0x0024 */
  FB_BOOLEAN AllowRoll; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VectorShapeData) == 40);

}
