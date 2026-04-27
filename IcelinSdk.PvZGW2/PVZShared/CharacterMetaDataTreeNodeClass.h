#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D4D8
   RuntimeId:        27DB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC8
   VfTable:          0000000142365D50
   Address (Base):   0000000143105C70
*/
#pragma pack(push, 8)
class CharacterMetaDataTreeNodeClass : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 WeaponId; /* 0x0018 */
  FB_FLOAT32 Health; /* 0x001C */
  FB_FLOAT32 Damage; /* 0x0020 */
  FB_FLOAT32 Speed; /* 0x0024 */
  FB_CSTRING Description; /* 0x0028 */
  FB_CSTRING AIDescription; /* 0x0030 */
  FB_CSTRING IconId; /* 0x0038 */
  FB_REFARRAY(class CharacterMetaDataTreeNodeClass) Nodes; /* 0x0040 */
  FB_BOOLEAN IsHiddenIfLocked; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CharacterMetaDataTreeNodeClass) == 80);

}
