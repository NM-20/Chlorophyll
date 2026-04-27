#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/BTree/BTFuncDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834198
   RuntimeId:        01A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DEC
   VfTable:          00000001421EB728
   Address (Base):   00000001430DCE30
*/
#pragma pack(push, 8)
class BTOverrideField : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BTFuncDataSource Source; /* 0x0010 */
  FB_INT32 ParameterName; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BTOverrideField) == 24);

}
