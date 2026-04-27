#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850EE8
   RuntimeId:        141C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B6
   VfTable:          000000014227F790
   Address (Base):   000000014310F6F0
*/
#pragma pack(push, 8)
class AntiRollBar : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Stiffness; /* 0x0010 */
  FB_FLOAT32 TorqueActivationLimit; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AntiRollBar) == 24);

}
