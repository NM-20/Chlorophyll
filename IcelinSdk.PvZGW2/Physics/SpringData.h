#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851330
   RuntimeId:        145E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA4A0
   Default Value:    0000000142851348
*/
#pragma pack(push, 4)
struct SpringData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Length; /* 0x0000 */
  FB_FLOAT32 Stiffness; /* 0x0004 */
  FB_FLOAT32 Damping; /* 0x0008 */
  FB_FLOAT32 ProgressiveStartRatio; /* 0x000C */
  FB_FLOAT32 ProgressiveExponent; /* 0x0010 */
  FB_FLOAT32 VisualClipOffset; /* 0x0014 */
  FB_FLOAT32 AttachOffsetY; /* 0x0018 */
  FB_FLOAT32 DisabledStrenghModifier; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SpringData) == 32);

}
