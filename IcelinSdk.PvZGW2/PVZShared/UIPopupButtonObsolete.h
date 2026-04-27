#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A970
   RuntimeId:        25B9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C33A8
   Default Value:    000000014286A988
*/
#pragma pack(push, 8)
struct UIPopupButtonObsolete
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIInputAction InputConcept; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Label; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPopupButtonObsolete) == 16);

}
