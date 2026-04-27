#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F5F8
   RuntimeId:        1DA3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D2
   VfTable:          000000014231D9D8
   Address (Base):   000000014310A710
*/
#pragma pack(push, 8)
class ParameterFloatProvider : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Float) Parameter; /* 0x0010 */
  FB_HANDLE(class FloatProvider) DefaultValue; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ParameterFloatProvider) == 32);

}
