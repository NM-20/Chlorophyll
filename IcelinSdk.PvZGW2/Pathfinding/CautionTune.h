#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850618
   RuntimeId:        139D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FA
   VfTable:          000000014227C810
   Address (Base):   00000001430FC670
*/
#pragma pack(push, 8)
class CautionTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 speedX; /* 0x0018 */
  FB_FLOAT32 tightTurnDegrees; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CautionTune) == 32);

}
