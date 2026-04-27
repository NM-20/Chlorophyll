#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EditableAction.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B2D8
   RuntimeId:        0F37
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC4
   VfTable:          0000000142260F08
   Address (Base):   0000000143113650
*/
#pragma pack(push, 8)
class OneOptionAxisEditableAction : public EditableAction
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0018 */
  FB_BOOLEAN Invert; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(OneOptionAxisEditableAction) == 40);

}
