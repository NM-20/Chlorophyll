#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Entity/ModifierAxis.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B1A0
   RuntimeId:        0893
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA3
   VfTable:          000000014220B510
   Address (Base):   00000001430EF8E0
*/
#pragma pack(push, 16)
class TransformModifierEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform In; /* 0x0020 */
  ModifierAxis Left; /* 0x0060 */
  ModifierAxis Up; /* 0x0064 */
  ModifierAxis Forward; /* 0x0068 */
  FB_BOOLEAN InvertFullTransform; /* 0x006C */
  FB_BOOLEAN InvertLeft; /* 0x006D */
  FB_BOOLEAN InvertUp; /* 0x006E */
  FB_BOOLEAN InvertForward; /* 0x006F */
  FB_BOOLEAN InvertTranslation; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(TransformModifierEntityData) == 128);

}
