#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428555F8
   RuntimeId:        1828
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1F
   VfTable:          00000001422BBFB0
   Address (Base):   00000001430E96A0
*/
#pragma pack(push, 16)
class DestructionVolumeComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DestructionVolumeData) DestructionVolumeData; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DestructionVolumeComponentData) == 128);

}
