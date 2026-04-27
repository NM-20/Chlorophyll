#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EditableAction.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B2B8
   RuntimeId:        0F35
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC5
   VfTable:          0000000142260D60
   Address (Base):   00000001431136B0
*/
#pragma pack(push, 8)
class OneOptionButtonEditableAction : public EditableAction
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OneOptionButtonEditableAction) == 32);

}
