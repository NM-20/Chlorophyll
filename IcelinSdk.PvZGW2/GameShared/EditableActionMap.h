#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EditableActions.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B320
   RuntimeId:        0F3B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C93E8
   Default Value:    000000014284B338
*/
#pragma pack(push, 8)
struct EditableActionMap
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0000 */
  FB_CSTRING NameId; /* 0x0008 */
  FB_HANDLE(class EntryInputActionMapsData) ActionMap; /* 0x0010 */
  EditableActions ConfigurationLayout; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EditableActionMap) == 32);

}
