#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863D68
   RuntimeId:        2173
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B93E0
   Default Value:    0000000142BFE908
*/
#pragma pack(push, 4)
struct PVZCharacterCustomizationComponentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef HasHat; /* 0x0000 */
  AntRef HideCustomization; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterCustomizationComponentBinding) == 40);

}
