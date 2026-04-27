#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AE08
   RuntimeId:        0EFB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B31
   VfTable:          0000000142262A08
   Address (Base):   00000001430D7450
*/
#pragma pack(push, 16)
class GameSplineEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) LocalPoints; /* 0x0080 */
  FB_STDARRAY(struct Vec3) Normals; /* 0x0088 */
  FB_GUID GameSplineDataGuid; /* 0x0090 */
  FB_STDARRAY(FB_FLOAT32) NormalizedLengths; /* 0x00A0 */
  FB_FLOAT32 Length; /* 0x00A8 */
  char pad_00AC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(GameSplineEntityData) == 176);

}
