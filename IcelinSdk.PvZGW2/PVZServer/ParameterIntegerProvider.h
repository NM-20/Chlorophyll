#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeIntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F6F8
   RuntimeId:        1DB3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10BA
   VfTable:          000000014231D7B8
   Address (Base):   000000014310A470
*/
#pragma pack(push, 8)
class ParameterIntegerProvider : public PVZBTreeIntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Integer) Parameter; /* 0x0010 */
  FB_HANDLE(class IntegerProvider) DefaultValue; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ParameterIntegerProvider) == 32);

}
