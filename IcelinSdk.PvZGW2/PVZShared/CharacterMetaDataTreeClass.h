#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D4F8
   RuntimeId:        27DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0782
   VfTable:          0000000142365CF0
   Address (Base):   0000000143105C10
*/
#pragma pack(push, 8)
class CharacterMetaDataTreeClass : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CharacterMetaDataTreeNodeClass) Nodes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CharacterMetaDataTreeClass) == 32);

}
