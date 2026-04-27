#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A830
   RuntimeId:        25A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0771
   VfTable:          000000014235B130
   Address (Base):   00000001430F7750
*/
#pragma pack(push, 8)
class UIObjectTagTreeClass : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UIObjectTagTreeNodeClass) Nodes; /* 0x0018 */
  FB_STDARRAY(struct UIObjectTagTypeInfo) TagTypes; /* 0x0020 */
  FB_FLOAT32 CrosshairFadeTime; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagTreeClass) == 48);

}
