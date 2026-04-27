#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EBF8
   RuntimeId:        1D03
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1048
   VfTable:          000000014231E3C0
   Address (Base):   000000014310C450
*/
#pragma pack(push, 8)
class ParameterBoolProvider : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Bool) Parameter; /* 0x0010 */
  FB_HANDLE(class BoolProvider) DefaultValue; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ParameterBoolProvider) == 32);

}
