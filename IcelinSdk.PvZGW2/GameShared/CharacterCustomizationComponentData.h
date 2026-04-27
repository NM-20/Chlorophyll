#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E5D8
   RuntimeId:        11F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D61
   VfTable:          0000000142273198
   Address (Base):   00000001430D09E0
*/
#pragma pack(push, 16)
class CharacterCustomizationComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshLodGroup) SharedLodGroup; /* 0x0070 */
  FB_BOOLEAN Visible; /* 0x0078 */
  FB_BOOLEAN HideCustomizationVisuals; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterCustomizationComponentData) == 128);

}
