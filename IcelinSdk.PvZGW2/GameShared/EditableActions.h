#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B2F8
   RuntimeId:        0F39
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB280
   Default Value:    000000014284B310
*/
#pragma pack(push, 8)
struct EditableActions
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_REFARRAY(class EditableAction) Actions; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(EditableActions) == 8);

}
